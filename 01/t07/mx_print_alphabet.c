#include <unistd.h>

void mx_printchar(char c);

void mx_print_alphabet(void) {
    int sw = 0;
    
    for (int i = 0; i < 26; ++i) {
        if (!sw) {
            mx_printchar('A' + i);
            ++sw;
        } else {
            mx_printchar('a' + i);
            --sw;
        }
    }
    mx_printchar('\n');
}

