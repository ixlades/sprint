#include <stdbool.h>

double mx_pow(double n, unsigned int pow);

bool mx_is_narcissistic(int num) {
    int num1 = 0, num2 = num;
    int sum = 0;

    if (num < 0) {
        return false;
    }
    while (num != 0) {
        num/= 10;
        ++num1;
    }
    num = num2;
    while (num != 0) {
        int digit = num % 10;
        sum += mx_pow(digit, num1);
        num /= 10;
    }
    return (sum == num2);
}

