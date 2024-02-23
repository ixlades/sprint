#include <unistd.h>
#include <stdbool.h>

bool mx_isdigit(int c);

bool mx_isspace(char c);

int mx_atoi(const char *str);

void mx_printchar(char c);

void mx_printint(int n);

int main(int argc, char *argv[]) {
    for (int i = 1; i < argc; i++) {
        int n = mx_atoi(argv[i]);
        int m;
        
        for (int c = 31; c >= 0; c--) {
            m = n >> c;
            if (m & 1) {
                mx_printint(1);
            }
            else {
                mx_printint(0);
            }
        }
        mx_printchar('\n');
    }
    return 0;
}

