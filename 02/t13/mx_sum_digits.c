int mx_sum_digits(int num) {
    int d, sum = 0;

    while (num) {
        d = num % 10;
        sum += d;
        num /= 10;
    }
    
    return sum;
}

