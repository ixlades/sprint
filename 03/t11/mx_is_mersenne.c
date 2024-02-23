#include <stdbool.h>

double mx_pow(double n, unsigned int pow);

bool mx_is_prime(int num);

bool mx_is_merssene(int n) {
    if (!mx_is_prime(n)) {
        return false;
    }

    int mersenneNumber = mx_pow(2, n) - 1;

    return mx_is_prime(mersenneNumber);
}

