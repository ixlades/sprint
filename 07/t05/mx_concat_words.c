#include <stdlib.h>

char *mx_strcat(char *s1, const char *s2);
char *mx_strcpy(char *dst, const char *src);
int mx_strlen(const char *s);
char *mx_strnew(const int size);
char *mx_strdup(const char *str);
char *mx_strjoin(char const *s1, char const *s2);
void mx_strdel(char **str);

char *mx_concat_words(char **words) {
    if (words == NULL || words[0] == NULL) {
        return NULL;
    }
    char *new_str = mx_strdup(*words);

    for (int i = 1; words[i] != NULL; ++i) {
        char *temp = mx_strjoin(new_str, " ");

        mx_strdel(&new_str);
        new_str = mx_strjoin(temp, words[i]);
        mx_strdel(&temp);
    }
    
    return new_str;
}

