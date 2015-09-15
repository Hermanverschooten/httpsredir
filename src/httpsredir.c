#include <sys/types.h>
#include <sys/select.h>
#include <sys/socket.h>
#include <microhttpd.h>
#include <string.h>
#include <stdio.h>
#include <malloc.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <syslog.h>
#include <signal.h>
#include <stdlib.h>
#include <errno.h>

#include "debug.h"
#define FAVICON "/favicon.ico"
#include "favicon.h"
#define LOGO "/images/gratwifi.png"
#include "logo.h"
#include "certs.h"
#include "page.h"
#include "config.h"

#ifndef PORT
#define PORT 8888
#endif

void termination_handler(int s)
{
    debug(LOG_DEBUG, "Termination handler called");
    if(running_daemon)
    {
        MHD_stop_daemon(running_daemon);
    }
    exit(0);
}

static void init_signals(void)
{
    debug(LOG_DEBUG, "Initializing signal handlers");

    if (signal(SIGINT, termination_handler) == SIG_IGN)
        signal(SIGINT,SIG_IGN);

    if (signal(SIGHUP, termination_handler) == SIG_IGN)
        signal(SIGHUP,SIG_IGN);

    if (signal(SIGTERM, termination_handler) == SIG_IGN)
        signal(SIGTERM,SIG_IGN);
}

struct MHD_Response *get_response(const char * url)
{

    if( 0 == strcmp(url, FAVICON))
        return MHD_create_response_from_buffer(
                favicon_size,
                (void*) favicon,
                MHD_RESPMEM_PERSISTENT);
    if( 0 == strcmp(url, LOGO))
        return MHD_create_response_from_buffer(
                logo_size,
                (void*) logo,
                MHD_RESPMEM_PERSISTENT);
    return MHD_create_response_from_buffer(
            page_size,
            (void*) page,
            MHD_RESPMEM_PERSISTENT);
}

int answer_to_connection(
        void *cls,
        struct MHD_Connection *connection,
        const char *url,
        const char *method,
        const char *version,
        const char *upload_data,
        size_t *upload_data_size,
        void **con_cls)
{
    static int dummy;
    int ret;
    struct MHD_Response *response;

    debug(LOG_DEBUG,"Received %s request for %s", method, url);

    if(&dummy != *con_cls)
    {
        *con_cls = &dummy;
        return MHD_YES;
    }

    *con_cls = NULL;

    response = get_response(url);
    ret = MHD_queue_response(connection, MHD_HTTP_OK, response);

    MHD_destroy_response(response);

    debug(LOG_DEBUG,"Finished %s request for %s", method, url);

    return ret;
}

static void usage(void)
{
    printf("Usage: httpredir [options]\n");
    printf("\noptions:\n");
    printf(" -d <level>     Debug level\n");
    printf(" -f             Run in foreground\n");
    printf(" -v             Print version info\n");
    printf(" -h             This message\n");
    printf("\n");
}

void parse_commandline(int argc, char **argv)
{
    int c;

    while ( -1 != ( c = getopt(argc, argv, "d:fv")))
    {
        switch(c)
        {
            case 'v':
                printf("HTTPSRedir " VERSION " (build " BUILDDATE ")\n");
                exit(0);
                break;
            case 'd':
                debuglevel = atoi(optarg);
                break;
            case 'f':
                as_daemon = 0;
                break;
            default:
                usage();
                exit(1);
                break;
        }
    }
}

void mainloop(void)
{
    debug(LOG_DEBUG, "In mainloop");

    running_daemon = MHD_start_daemon(
            MHD_USE_THREAD_PER_CONNECTION | MHD_USE_SSL | MHD_USE_SELECT_INTERNALLY,
            PORT,
            NULL, NULL,
            &answer_to_connection, NULL,
            MHD_OPTION_THREAD_POOL_SIZE, 100,
            MHD_OPTION_HTTPS_MEM_CERT, SERVERCERTFILE,
            MHD_OPTION_HTTPS_MEM_KEY, SERVERKEYFILE,
            MHD_OPTION_END);

    if (NULL == running_daemon)
    {
        printf("Failed to start daemon!\n");
        return 1;
    }

    while(1)
        pause();
}


int main(int argc,char **argv)
{
    as_daemon = 1;
    debuglevel= LOG_INFO;

    parse_commandline(argc, argv);

    debug(LOG_INFO, "HTTPSRedir " VERSION " (build " BUILDDATE ") is starting on port %d.", PORT );

    if(1 == as_daemon)
    {
        init_signals();
        debug(LOG_DEBUG, "Switching to daemon mode");
        switch(fork())
        {
            case 0:
                debug(LOG_DEBUG, "In forked child, starting mainloop");
                mainloop();
                break;
            case 1:
                debug(LOG_DEBUG, "Exiting parent process");

                exit(0);
                break;
            case -1:
                debug(LOG_CRIT, "Failed to fork: %s. Bailing out!", strerror(errno));
                break;
        }
    }
    else
        mainloop();
}
