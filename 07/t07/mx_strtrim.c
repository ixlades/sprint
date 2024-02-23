#include <stdbool.h>
#include <stdlib.h>

int mx_strlen(const char *s);
bool mx_isspace(char c);
char *mx_strncpy(char *dst, const char *src, int len);
char *mx_strnew(int size);
void mx_strdel(char **str);

char *mx_strtrim(const char *str) {
    if (str == NULL) {
        return NULL;
    }
    int frstcut = 0;
    int full_length = mx_strlen(str);

    while (mx_isspace(*str)) {
        ++str;
        ++frstcut;
    }
    if (*str == '\0') {
        return mx_strnew(0);
    }
    char *str_cpy1 = mx_strnew(full_length - frstcut);

    mx_strncpy(str_cpy1, str, full_length - frstcut);
    int sec_length = mx_strlen(str_cpy1);
    int seccut = 0;

    for (int i = 1; mx_isspace(*(str_cpy1 + sec_length - i)); ++i) {
        ++seccut;
    }
    char *fin_cpy = mx_strnew(sec_length - seccut);

    mx_strncpy(fin_cpy, str_cpy1, sec_length - seccut);
    mx_strdel(&str_cpy1);
    return fin_cpy;
}

