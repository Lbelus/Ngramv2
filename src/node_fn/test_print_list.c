#include "../../include/header.h"

void test_print_list(node_t *head){
    node_t *tmp = head;
    while(tmp != NULL){
        printf("%d-", tmp->value);
        printf("%s-", tmp->str);
        printf("count : %d-\n", tmp->count);
        tmp = tmp->next;
    }
    write(1,"\n",1);
}