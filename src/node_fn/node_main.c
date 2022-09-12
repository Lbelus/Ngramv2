#include "../../include/header.h"

int node_main(char ** str_arr, int arr_size) {

    node_t *head;
    node_t *tmp;
    int index = 0;

    while(index < arr_size) {
        tmp = create_new_node(index, str_arr[index]);
        head = insert_at_head(&head, tmp);
        index++;
    }

    index = 0;
    while(index < arr_size){
        count_word(head, str_arr[index]);
        index++;
    }

    //printf("strcmp : %d\n", my_strcmp("test", "test") );
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
}