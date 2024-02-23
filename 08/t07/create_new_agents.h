#ifndef CREATE_NEW_AGENTS_H
#define CREATE_NEW_AGENTS_H

#include <stdlib.h>
#include <string.h>
#include "agent.h"

char *mx_strnew(const int size);
int mx_strlen(const char *s);
char *mx_strdup(const char *str);
char *mx_strcpy(char *dst, const char *src);
t_agent *mx_create_agent(char *name, int power, int strength);

#endif

