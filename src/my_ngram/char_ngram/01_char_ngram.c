#include "../../../include/header.h"

int char_ngram(int* int_arr, char** str_arr, int size_arr) {
    int column = 1, row = 0, pos = 0 ;
    char *msg = "int fail";
    
    while(column < size_arr) {
        while(str_arr[column][row] != '\0'){
            pos = (int)str_arr[column][row];
            row++;
            int_arr[pos] += 1;

            if(pos > 32766){
                write(1, msg, sizeof(char)*my_strlen(msg));
                return EXIT_FAILURE; 
            }
        }
        row = 0;
        column++;
    }
    return EXIT_SUCCESS;
}