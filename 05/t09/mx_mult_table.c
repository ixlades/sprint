#include <unistd.h>
#include <stdbool.h>

void mx_printchar(char c);

void mx_printint(int n);

int mx_atoi(const char *str);

bool mx_isdigit(int c);

bool mx_isspace(char c);

int mx_strlen(const char *s);

int main(int argc, char *argv[]) {
    if (argc != 3) {
        return 0;
    }
    if(!mx_isdigit(mx_atoi(argv[1]) + '0') || !mx_isdigit(mx_atoi(argv[2]) + '0')) {
        return 0;
    }
    int min = mx_atoi(argv[1]);
    int max = mx_atoi(argv[2]);

    if (max < min) {
        min = mx_atoi(argv[2]);
        max = mx_atoi(argv[1]);
    }
    for (int i = min; i <= max; i++) {
        for (int j = min; j <= max; j++) {
            mx_printint(i * j);
            if (j != max)
                mx_printchar('\t');
        }
        mx_printchar('\n');
    }
    return 0;
}

