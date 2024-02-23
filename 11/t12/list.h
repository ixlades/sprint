#ifndef LIST_H
#define LIST_H

#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>

#define ADD "add"
#define REMOVE "remove"
#define SORT "sort"
#define PRINT "print"

typedef struct s_list {
    void *data;
    struct s_list *next;
}              t_list;

typedef struct {
    char *author;
    char *song;
    
} Names;

char *mx_file_to_str(const char *filename);




int mx_list_size(t_list *list);
t_list *mx_create_node(void *data);
void mx_push_front(t_list **list, void *data);
void mx_push_back(t_list **list, void *data);
void mx_pop_back(t_list **list);
void mx_pop_front(t_list **list);
void mx_pop_index(t_list **list, int index);
void mx_foreach_list(t_list *list, void(*f)(t_list *node));
t_list *mx_sort_list(t_list *list, bool(*cmp)(void *a, void *b));

void mx_printerr(const char *s);
int mx_strlen(const char *s);
int mx_strcmp(const  char *s1, const char *s2);
bool mx_isdigit(int c);
bool mx_isspace(char c);
int mx_atoi(const char *str);
char *mx_strjoin(char const *s1, char const *s2);
char *mx_strdup(const char *str);
char *mx_strnew(const int size);
char *mx_strcpy(char *dst, const char *src);
char *mx_strcat(char *s1, const char *s2);

#endif

