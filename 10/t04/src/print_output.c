#include "wc.h"

void print_output(int lines, int words, int bytes, const char *filename) {
    print_number(lines);
    print_char('\t');
    print_number(words);
    print_char('\t');
    print_number(bytes);
    print_char('\t');
    write(STDOUT_FILENO, filename, mx_strlen(filename));
    print_char('\n');
}

