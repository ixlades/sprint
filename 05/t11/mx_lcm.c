int mx_gcd(int a, int b);

int mx_lcm(int a, int b) {
    if (a == 0 || b == 0) {
        return 0;
    }
    int result = (a * b) / mx_gcd(a, b);
    
    if (result < 0) {
        return result * -1;
    }
    return result;
}

