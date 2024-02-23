#ifndef WC_H
#define WC_H

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <errno.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void print_output(int lines, int words, int bytes, const char *filename);
void print_number(int num);
void print_char(char c);
int mx_strlen(const char *s);
void mx_printerr(const char *s);
bool mx_isspace(char c);
void wc(const char *filename, int *total_lines, int *total_words, int *total_bytes);

#endif

