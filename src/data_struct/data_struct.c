#include "../../include/header.h"

string_array* store_arrays(char** str_arr, int size_arr) {
    
    int row = 0;
    string_array* string_ptr = malloc(sizeof(string_array));
    string_ptr->size = size_arr;
     
    string_ptr->array = str_arr;
    //free_array(str, size_array);
    return string_ptr;
}

integer_array* count_array(string_array* str_arr) {
    int row = 0;
    integer_array* integer_ptr = malloc(sizeof(integer_array));
    integer_ptr->size = str_arr->size;
    integer_ptr->arr = malloc(sizeof(int)*str_arr->size);

    while(row <str_arr->size) {
        integer_ptr->arr[row] = my_strlen(str_arr->array[row]);
        row++;
    }
    return integer_ptr;
}




