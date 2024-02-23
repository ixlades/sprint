#include "list.h"
                                                        
void mx_del_node_if(t_list **list, void *del_data, bool(*cmp)(void *a, void *b)) {
    t_list *temp = *list;
    t_list *prev = NULL;
    t_list *nextNode;
    
    while (temp != NULL) {
        nextNode = temp->next;
        if (cmp(temp->data, del_data)) {
            if (prev != NULL) {
                prev->next = temp->next;
                free(temp);
            } else {
                *list = temp->next;
                free(temp);
            }
        } else {
            prev = temp;
        }
        temp = nextNode;
    }
}

