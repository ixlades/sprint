int mx_factorial_rec(int n) {
    if (n >= 1 && n < 13) {
        return n * mx_factorial_rec(n - 1);
    } else if (n == 0) {
        return 1;
    } else {
        return 0;
    }
}

