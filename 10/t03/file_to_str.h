#ifndef FILE_TO_STR_H
#define FILE_TO_STR_H

#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <errno.h>

char *mx_strcat(char *s1, const char *s2);
char *mx_strcpy(char *dst, const char *src);
int mx_strlen(const char *s);
char *mx_strnew(const int size);
char *mx_strdup(const char *str);
char *mx_strjoin(char const *s1, char const *s2);
char *mx_file_to_str(const char *filename);


#endif

