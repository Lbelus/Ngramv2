#include "../../include/header.h"
    
int get_array_size(int* bool_arr, int len) {
    
    int index = 0, size_arr = 1, prev = bool_arr[0];

    while(index < len) {
        if(prev != bool_arr[index] && bool_arr[index] == true){
            size_arr++;
        }
        prev = bool_arr[index];   
        index++;
    }
    return size_arr;
}