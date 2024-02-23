#ifndef CREATE_AGENT_H
#define CREATE_AGENT_H

#include <stdlib.h>
#include <string.h>
#include "agent.h"

char *mx_strnew(const int);
char *mx_strcpy(char*, const char*);
unsigned long mx_strlen(const char*);
char *mx_strdup(const char*);
t_agent *mx_create_agent(char*, int, int);


#endif

