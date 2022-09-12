#include "../../include/header.h"

node_t *find_node(node_t *head, int value){
    node_t *tmp = head;
    while(tmp != NULL) {
        if(tmp->value == value) return tmp;
        tmp = tmp->next;
    }
    return NULL;
}