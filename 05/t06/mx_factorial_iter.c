#include <limits.h>

int mx_factorial_iter(int n) {
    int factorial = 1;
    
    for (int i = 1; i <= n; ++i) {
        factorial *= i;
    }
    if (factorial <= INT_MAX && n > 0) {
        return factorial;
    }
    return 0;
}

