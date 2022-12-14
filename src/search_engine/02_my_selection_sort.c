#include "../../include/header.h"

// Function to perform Selection Sort
void selectionSort(int *arr, int n , char ** str_array)
{
    int i, j, min_idx;
 
    // One by one move boundary of unsorted subarray
    for (i = 0; i < n - 1; i++) {
 
        // Find the minimum element in unsorted array
        min_idx = i;
        for (j = i + 1; j < n; j++)
            if (arr[j] > arr[min_idx])
                min_idx = j;
 
        // Swap the found minimum element
        // with the first element
        swap(&arr[min_idx], &arr[i]);
        swap02((int**)&str_array[min_idx], (int**)&str_array[i]);
    }
}