#include "../../include/header.h"
    
void dynamic_malloc(char ** arr, int* bool_arr, int len , int size_arr) {

    int row = 0, index = 0, counter = 0;

    while(index < len+1) { 
        if(bool_arr[index] == true){
            counter++;
        } else if ((bool_arr[index] == false && counter > 0) || row == (size_arr)){
            arr[row] = malloc(sizeof(char)*(counter+1));
            counter = 0;
            row++;
        }
      index++;
    }
}