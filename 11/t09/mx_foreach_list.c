#include "list.h"

void mx_foreach_list(t_list *list, void(*f)(t_list *node)) {
    t_list *temp = list;

    while (temp != NULL) {
        f(temp);
        temp = temp->next;
    }
}

