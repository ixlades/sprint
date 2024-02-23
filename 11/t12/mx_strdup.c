#include <stdlib.h>

char *mx_strcpy(char *dst, const char *src);

int mx_strlen(const char *s);

char *mx_strnew(const int size);

char *mx_strdup(const char *str) {
    if (str == NULL) {
        return NULL;
    }
    char *copy_str = mx_strnew(mx_strlen(str) + 1);
    
    if (copy_str != NULL) {
        mx_strcpy(copy_str, str);
    }
    return copy_str;
}

