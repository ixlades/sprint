#include "get_address.h"

char *mx_get_address(void *p) {
    unsigned long address = (unsigned long)p;
    char *str = mx_nbr_to_hex(address);
    int len = mx_strlen(str);
    char *result = mx_strnew(len + 2);

    mx_strcpy(result, "0x");
    mx_strcpy(result + 2, str);
    free(str);

    return result;
}

