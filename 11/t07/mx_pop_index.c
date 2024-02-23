#include "list.h"

int mx_list_size(t_list *list) {
    int count = 0;
    t_list *temp = list;

    while(temp->next != NULL) {
        temp = temp->next;
        ++count;
    }

    return count;
}

void mx_pop_index(t_list **list, int index) {
    int list_size = mx_list_size(*list);
    t_list* temp = *list;
    int current_size = 0;

    if (index > list_size) {
        mx_pop_back(list);
        return;
    }
    if (index <= 0) {
        mx_pop_front(list);
        return;
    }

    while (current_size < index - 1) {
        temp = temp->next;
        ++current_size;
    }
    
    t_list *node_to_remove = temp->next;
    
    temp->next = node_to_remove->next;
    free(node_to_remove);
}

