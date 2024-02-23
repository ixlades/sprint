#ifndef MX_CP_H
#define MX_CP_H

#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <stdio.h>
#define BUFFER_SIZE 4096

int mx_strlen(const char *s);
void mx_printerr(const char *s);

#endif

