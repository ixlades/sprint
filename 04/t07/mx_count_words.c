int mx_count_words(const char *str, char delimiter) {
    int counter = 0;
    
    while (*str != '\0') {
        if (str[0] != delimiter && counter == 0) {
            ++counter;
        }
        if (*str == delimiter && *(str + 1) != '\0') {
            while (*str == delimiter && *(str + 1) != '\0') {
                ++str;
            }
            ++counter;
        }
        ++str;
    }
    return counter;
}

