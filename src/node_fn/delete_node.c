#include "../../include/header.h"

void delete_node(node_t **head, int key) {
    node_t *tmp = *head;
    node_t *prev;

    if(tmp != NULL && tmp->value == key){
        *head = tmp->next;
        free(tmp);
        return;
    }
    while(tmp != NULL && tmp->value != key) {
        prev = tmp;
        tmp = tmp->next;
    }
    if (tmp == NULL){
        return;
    }
    prev->next = tmp->next;
    free(tmp);
}