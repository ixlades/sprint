#include <unistd.h>
#include <stdbool.h>

bool mx_isspace(char c);

void mx_printchar(char c);

bool mx_isdigit(int c);

void mx_printint(int n);

int mx_atoi(const char *str);

int main(int argc, char *argv[]) {
    if (argc > 1) {
        int sum = 0;

        for (int i = 1; i < argc; ++i) {
            bool isValid = true;
            const char *pstate = argv[i];

            if (*argv[i] == '+' || *argv[i] == '-') {
                ++argv[i];
            }

            while (*argv[i] != '\0' && isValid) {
                if (!mx_isdigit(*argv[i])) {
                    isValid = false;
                } else if (mx_isspace(*argv[i])) {
                    isValid = false;
                }
                ++argv[i];
            }
            
            if (isValid) {
                sum += mx_atoi(pstate);
            }
        }
        mx_printint(sum);
        mx_printchar('\n');
    }
    return 0;
}

