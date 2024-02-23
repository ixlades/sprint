int mx_strlen(const char *s);

void mx_swap_char(char *s1, char *s2);

void mx_str_reverse(char *s) {
    int length = mx_strlen(s);
    
    while ((s + length - 1) > s) {
        mx_swap_char(s, (s + length - 1));
        length -= 2;
        ++s;
    }
}

