#include <unistd.h>

void mx_printchar(char c);

void mx_hexadecimal(void) {
    for (int i = 0; i < 16; ++i) {
        if (i < 10) {
            mx_printchar('0' + i);
        } else {
            mx_printchar('A' + (i - 10));
        }
    }
    mx_printchar('\n');
}

