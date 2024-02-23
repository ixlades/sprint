char *mx_strchr(const char *s, int c);

int mx_strlen(const char *s);

int mx_strncmp(const char *s1, const char *s2, int n);

char *mx_strstr(const char *s1, const char *s2) {
    int len = mx_strlen(s2);
    char *first_chr = mx_strchr(s1, *s2);

    while (first_chr != NULL) {
       if (!mx_strncmp(first_chr, s2, len)) {
           return (char *)first_chr;
       } else {
           first_chr = mx_strchr(first_chr + 1, *s2);
       }
    }
    return NULL;
}

