#include <stdio.h>
#include <errno.h>
#include <syslog.h>
#include <stdarg.h>
#include <time.h>
#include <unistd.h>

#include "config.h"
#ifdef DMALLOC
#include <dmalloc.h>
#endif

/** @internal
Do not use directly, use the debug macro */
void
_debug(char *filename, int line, int level, char *format, ...)
{
    char buf[28];
    va_list vlist;
    time_t ts;

    time(&ts);

    if (debuglevel >= level) {

        if (level <= LOG_WARNING) {
            fprintf(stderr, "[%d][%.24s][%u](%s:%d) ", level, ctime_r(&ts, buf), getpid(),
			    filename, line);
            va_start(vlist, format);
            vfprintf(stderr, format, vlist);
            va_end(vlist);
            fputc('\n', stderr);
        } else if (!as_daemon) {
            fprintf(stdout, "[%d][%.24s][%u](%s:%d) ", level, ctime_r(&ts, buf), getpid(),
			    filename, line);
            va_start(vlist, format);
            vfprintf(stdout, format, vlist);
            va_end(vlist);
            fputc('\n', stdout);
            fflush(stdout);
        }

            openlog("httpsredir", LOG_PID, LOG_DAEMON);
            va_start(vlist, format);
            if(level == LOG_DEBUG) {
                char buffer[4096];
                vsprintf(buffer, format, vlist);
                syslog(level, "(%s:%d) %s", filename, line, buffer);
            } else {
                vsyslog(level, format, vlist);
            }
            va_end(vlist);
            closelog();
    }
}

