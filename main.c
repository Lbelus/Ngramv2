#include "include/header.h"


int main(int argc, char **argv) {

    string_array* str_ptr = html_cleaner(argv[1]);
    int i = 0;
    
    /*
    while(i < str_ptr->size){
        printf("str : %s\n",str_ptr->array[i]);
        i++;
    }
    */
    //printf("size arr :%i \n",str_ptr->size);

    integer_array* int_ptr = count_array(str_ptr);
    /*
    int x = 0;
    
    while(x < int_ptr->size){
        printf("%d\n",int_ptr->arr[x]);
        x++;
    }
    */
    node_main(str_ptr->array, str_ptr->size);
    write(1,"\n",1);

    search(str_ptr->array, str_ptr->size, "test");
    free(int_ptr->arr);
    free_array(str_ptr->array, str_ptr->size);
    free(str_ptr);
    free(int_ptr);

    return 0;
}