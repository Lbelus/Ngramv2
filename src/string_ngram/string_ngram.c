#include "../../include/header.h"
void count_word(node_t *head, char *str_arr) {
    node_t *tmp = head;
   
    while(tmp != NULL) {
        if(my_strcmp(str_arr, tmp->str) == 0) {
            tmp->count += 1;
        }
        //printf("trcmp :%d - str1 :%s - str2 :%s - count :%d\n", my_strcmp(tmp->str, str_arr), tmp->str, str_arr, tmp->count);
        tmp = tmp->next;
    }
}