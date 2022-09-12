#include "../../include/header.h"
/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */



//int* returnSize, int** returnColumnSizes

char *** search(char ** products, int productsSize, char * searchWord) {
  
  int i = 0;
  int x = 0;
  int len = my_strlen(searchWord);
  int counter = 0;
  int* store_int = malloc(sizeof(int)*productsSize);

//strcmp
  while(i < productsSize) {
    counter = 0;
    while(products[i][x] !='\0' && searchWord[x] != '\0'){       
      if(products[i][x] == searchWord[x]){
        counter++;
      }
      x++;
    }
    store_int[i] = counter;
    x = 0;
    i++;
  }
  
  if(my_is_sort(store_int, productsSize) == false){
    selectionSort(store_int, productsSize, products);
    //mergeSort(store_int, 0, productsSize-1, products);
  }
  
  my_revswap02(products, productsSize); 

  for(int test = 0; test < productsSize; test++){
    printf("%i\n",store_int[test]);
  }

    for(int test = 0; test < productsSize; test++){
    printf("%s\n",products[test]);
  }
  
  free(store_int);
  
return 0;
}