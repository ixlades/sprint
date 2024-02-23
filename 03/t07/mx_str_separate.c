#include <unistd.h>

void mx_printchar(char c);

void mx_str_separate(const char *str, char delim) {
    while (*str != '\0') {
        if (*str != delim) {
            mx_printchar(*str);
            ++str;
        } else {
            while (*str == delim) {
                ++str;
            }
            mx_printchar('\n');
        }
    }
    mx_printchar('\n');
}

