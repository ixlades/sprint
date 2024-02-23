#include <stdlib.h>
#include <stdbool.h>

int mx_count_words(const char *str, char delimiter);
void mx_strdel(char **str);
char *mx_strncpy(char *dst, const char *src, int len);
char *mx_strnew(const int size);

int find_word_length(const char *s, char delimiter) {
    int len = 0;

    while(*s != '\0' && *s != delimiter) {
        len++;
        s++;
    }

    return len;
}

char **mx_strsplit(char const *s, char c) {
    if (s == NULL) {
        return NULL;
    }

    int words_count = mx_count_words(s, c);

    char **words = (char**)malloc(sizeof(char*) * (words_count + 1));

    if (words == NULL) {
        return NULL;
    }

    int word_index = 0;

    bool in_word = false;

    while (*s != '\0') {
        if (*s != c){
            if (in_word == false) {
                int word_length = find_word_length(s, c);
                words[word_index] = mx_strnew(word_length);
                mx_strncpy(words[word_index], s, word_length);
                word_index++;
                s += word_length;
                in_word = true;
            }
            else {
                s++;
            }
        }
        else {
            in_word = false;
            s++;
        }
    }

    words[word_index] = NULL;

    return words;
}

