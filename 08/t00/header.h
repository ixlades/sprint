#ifndef _HEADER_H
#define _HEADER_H

#include <unistd.h>
#include <stdbool.h>

void mx_printchar(char c);
int mx_strlen(const char *s);
char *mx_strcpy(char *dst, const char *src);
int mx_strcmp(const char *s1, const char *s2);
void mx_printstr(const char *s);
void mx_printint(int n);
bool mx_isspace(char c);
bool mx_isdigit(int c);
int mx_atoi(const char *str);

#endif 

