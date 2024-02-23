#include "wc.h"

void print_char(char c) {
    write(STDOUT_FILENO, &c, 1);
}

