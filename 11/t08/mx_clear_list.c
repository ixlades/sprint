#include "list.h"


void mx_clear_list(t_list **list) {
    t_list *temp = *list;
    t_list* nextNode;
    
    while (temp != NULL) {
        nextNode = temp->next;
        free(temp);
        temp = nextNode;
    }
    
    *list = NULL;
}

