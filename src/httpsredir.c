#include <sys/types.h>
#include <sys/select.h>
#include <sys/socket.h>
#include <microhttpd.h>
#include <string.h>
#include <stdio.h>
#include <malloc.h>
#include <netinet/in.h>
#include <arpa/inet.h>

#define FAVICON "/favicon.ico"
#include "favicon.h"
#define LOGO "/images/gratwifi.png"
#include "logo.h"
#include "certs.h"
#include "page.h"

#ifndef PORT
#define PORT 8888
#endif

struct MHD_Response *get_response(const char * url)
{
    printf("URL: '%s'\n", url);
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
    int ret;
    struct MHD_Response *response;

    response = get_response(url);
    ret = MHD_queue_response(connection, MHD_HTTP_OK, response);

    MHD_destroy_response(response);

    return ret;
}

int main()
{
    struct MHD_Daemon *daemon;

    daemon = MHD_start_daemon(
            MHD_USE_THREAD_PER_CONNECTION | MHD_USE_SSL,
            PORT,
            NULL, NULL,
            &answer_to_connection, NULL,
            MHD_OPTION_HTTPS_MEM_CERT, SERVERCERTFILE,
            MHD_OPTION_HTTPS_MEM_KEY, SERVERKEYFILE,
            MHD_OPTION_END);

    if (NULL == daemon)
    {
        printf("Failed to start daemon!\n");
        return 1;
    }

    getchar();

    MHD_stop_daemon(daemon);

    return 0;
}
