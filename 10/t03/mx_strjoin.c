#include "file_to_str.h"

char *mx_strjoin(char const *s1, char const *s2) {
    if (s1 == NULL && s2 == NULL) {
        return NULL;
    }
    char *str1 = mx_strdup(s1);
    char *str2 = mx_strdup(s2);
    if (str1 == NULL) {
        free(str1);
        return str2;
    }
    if (str2 == NULL) {
    	free(str2);
        return str1;
    }
    char *str = mx_strdup(mx_strcat(str1, str2));
    free(str1);
    free(str2);
    return str;
}

