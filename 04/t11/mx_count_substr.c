char *mx_strchr(const char *s, int c);

int mx_strlen(const char *s);

int mx_strncmp(const char *s1, const char *s2, int n);

char *mx_strstr(const char *s1, const char *s2);

int mx_count_substr(const char *str, const char *sub) {
    if (!mx_strlen(sub)) {
        return 0;
    }
    char *find_str = mx_strstr(str, sub);
    int counter = 0;

    while (find_str != NULL) {
        find_str = mx_strstr(find_str + 1, sub);
        ++counter;
    }
    return counter;
}

