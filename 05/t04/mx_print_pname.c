#include <unistd.h>
#include <stddef.h>

char *mx_strchr(const char *s, int c);

void mx_printchar(char c);

int mx_strlen(const char *s);

void mx_printstr(const char *s);

int main(int argc, char *argv[]) {
    if (argc > 0) {
        char *name = NULL;

        for (int i = 0; mx_strchr(argv[0] + i, '/') != NULL ; ++i) {
            name = mx_strchr(argv[0] + i, '/');
        }
        mx_printstr(name + 1);
        mx_printchar('\n');
    }
    return 0;
}

