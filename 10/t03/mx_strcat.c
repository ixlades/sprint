#include "file_to_str.h"

char *mx_strcat(char *s1, const char *s2) {
    int length = mx_strlen(s1);
    char *ps1 = s1;
    int i = 0;

    for (; *(s2 + i) != '\0'; ++i) {
        *(s1 + length + i) = *(s2 + i);
    }
    *(s1 + length + i) = '\0';
    return ps1;
}

