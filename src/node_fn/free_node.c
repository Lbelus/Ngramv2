#include "../../include/header.h"


void free_node(node_t *head) {
    node_t *tmp = head; 
    
    while(head != NULL) {
        head = head->next;
        free(tmp);
        tmp = head; 
    }
}