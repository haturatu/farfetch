#if defined(__FreeBSD__)
#ifndef LOGO_FREEBSD_H
#define LOGO_FREEBSD_H

#include "colors.h"

extern char *LOGO[23];
extern char *LOGO_SMALL[23];
extern const char *color;
extern const char *titlecolor;
extern size_t logosize;

void getOS();

#endif
#endif
