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

void mx_push_index(t_list** list, void* data, int index) {
    int list_size = mx_list_size(*list);
    t_list* temp = *list;
    int current_size = 0;

    if (index > list_size) {
        mx_push_back(list, data);
        return;
    }
    if (index <= 0) {
        mx_push_front(list, data);
        return;
    }

    while (current_size < index - 1) {
        temp = temp->next;
        ++current_size;
    }

    t_list* new_node = mx_create_node(data);

    new_node->next = temp->next;
    temp->next = new_node;
}

