#include "../../include/header.h"

void free_array(char** arr, int size_arr) {
    int row = 0;
    while(row < size_arr) {
        free(arr[row]);
        row++;
    }
    free(arr);
}

void free_array02(int* arr, int size_arr) {
    int row = 0;
    while(row < size_arr) {
        free(arr);
        row++;
    }
    free(arr);
}