#include "include/header.h"
#include <stdlib.h>

/*
node_t *create_new_node(int value) {
    node_t *result = malloc(sizeof(node_t));
    result->value = value;
    result->next = NULL;
    return result;
}
*/
/*
node_t *insert_at_head(node_t **head, node_t *node_structo_insert){
    node_structo_insert->next = *head;
    *head = node_structo_insert;
    return node_structo_insert;
}


void insert_after_node(node_t *node_to_insert, node_t *newnode){
    newnode->next = node_to_insert->next;
    node_to_insert->next = newnode;
}


void reverse_node_order(node_t **head) {
    node_t *prev = NULL;
    node_t *current = *head;
    node_t *next = NULL;

    while(current != NULL){
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;  
    }
    *head = prev;
}


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



void delete_node(node_t *head, node_t *node_to_delete) {
    if(head == node_to_delete) {
        if(head->next == NULL) {
            return ;
        }
    }

    head->value = head->next->value;
    node_to_delete = head->next;
    head->next = head->next->next;
    free(node_to_delete);

    return;
}


node_t *find_node(node_t *head, int value){
    node_t *tmp = head;
    while(tmp != NULL) {
        if(tmp->value == value) return tmp;
        tmp = tmp->next;
    }
    return NULL;
}


void test_print_list(node_t *head){
    node_t *tmp = head;

    while(tmp != NULL){
            printf("%d-", tmp->value);
            tmp = tmp->next;
    }
    write(1,"\n",1);
}


void free_node(node_t *head) {

    node_t *tmp = head; 

    while(head != NULL) {
        head = head->next;
        free(tmp);
        tmp = head; 
    }
}
*/
/*
int linked_list_main(char ** str_arr) {

    node_t *head;
    node_t *tmp;
    int index = 0;
    while(str_arr[index] != NULL) {
        tmp = create_new_node(index, str_arr[index]);
        head = insert_at_head(&head, tmp);
        index++;
    }

    //tmp = find_node(head, 7);
    //printf("found node with value %d\n", tmp->value);
    
    //insert_after_node(tmp,create_new_node(80));
    //tmp = find_node(head, 1);
    //printf("found node with value %d\n", tmp->value);

    //delete_node(&head, 7);
    
    //reverse_node_order(&head);

    test_print_list(head);
    
    free_node(head);
    
    printf("\n");

    return 1;
}*/