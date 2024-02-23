#include <stdbool.h>
#include <stdlib.h>

int mx_strlen(const char *s);
bool mx_isspace(char c);
char *mx_strncpy(char *dst, const char *src, int len);
char *mx_strnew(int size);
void mx_strdel(char **str);
char *mx_strtrim(const char *str);

int mx_count_non_spaces(char *trim_str, int length) {
    int count = 0;
    for (int i = 0; i < length; ++i) {
        if (mx_isspace(trim_str[i])) {
            ++count;
            ++i;
            while (mx_isspace(trim_str[i])) {
                ++i;
            }
        } else {
            ++count;
        }
    }
    return count;
}

char *mx_del_extra_whitespaces(const char *str) {
    if (str == NULL) {
        return NULL;
    }
    int length = mx_strlen(mx_strtrim(str));
    char *trim_str = mx_strnew(length);

    trim_str = mx_strtrim(str);
    int j = 0;
    char *clear_str = mx_strnew(mx_count_non_spaces(trim_str,length));

    if (trim_str == NULL) {
        return NULL;
    }

    for (int i = 0; i < length; ++i) {

        if (mx_isspace(trim_str[i])) {
            clear_str[j] = trim_str[i];
            ++j;
            while (mx_isspace(trim_str[i])) {
                ++i;
            }
            clear_str[j] = trim_str[i];
        } else {
            clear_str[j] = trim_str[i];
        }
        ++j;
    }
    mx_strdel(&trim_str);
    return clear_str;
}

