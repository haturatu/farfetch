#if defined(__linux__) || defined(__sun)
#ifndef DISTRO_H
#define DISTRO_H

const char *display_distro();
void get_distro();

extern const char *distroname;

#endif
#endif
