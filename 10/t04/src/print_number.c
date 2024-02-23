#include "wc.h"

void print_number(int num) {
    char buffer[32];
    int len = 0;

    while ((num > 0)){
        buffer[len++] = '0' + num % 10;
        num /= 10;
    }

    for (int i = len - 1; i >= 0; --i) {
        write(STDOUT_FILENO, buffer + i, 1);
    }
}

