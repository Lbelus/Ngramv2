#include "../../include/header.h"


int my_strcmp(char* str1, char* str2) {
      if(str1 == NULL || str2 == NULL){return 0;}
    
    int result = 0;
    int index = 0;
    while(str1[index] != '\0'  || str2[index] != '\0'){
        if(str1[index] != str2[index]){
            result = 1;
            break;
        }
        index++;
    }

    return result;  

}


/*

    if(str1 == NULL || str2 == NULL){return 0;}
    int index = 0;
    int result = 0; 

    while(result == 0) {
        if (str1[index] > str2[index]) {
            result = 1;
        }
        else if (str1[index] < str2[index]) {
            result = -1;
        }
        if (str1[index] == '\0'){
            break;
        }
        index++;
    }
    return result;
*/
    
    /*

    */



/*int my_strcmp(char* str1, char* str2) {
    int len1 = my_strlen(str1);
    int len2 = my_strlen(str2);
    int result = len2 - len1;
    return result;
}
*/
