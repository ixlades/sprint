
#ifndef _HEX_TO_NBR_H
#define _HEX_TO_NBR_H

#include <stdbool.h>

int mx_isalpha(int с);
bool mx_isdigit(int c);
bool mx_islower(int c);
bool mx_isupper(int c);
unsigned long mx_hex_to_nbr(const char *hex);

#endif

