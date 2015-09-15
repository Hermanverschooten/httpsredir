/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.in by autoheader.  */
#include "stringify.h"

#ifdef PVERSION
/* Version number of package */
#define VERSION stringify(PVERSION)

/* Build date of package */
#define BUILDDATE stringify(PBUILDDATE)

#else
/* Version number of package */
#define VERSION "not set"

/* Build date of package */
#define BUILDDATE "not set"

#endif

#ifndef _CONFIG_
#define _CONFIG_

int debuglevel;
int as_daemon;
struct MHD_Daemon *running_daemon;
#endif
