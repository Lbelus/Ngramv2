#include "../../include/header.h"


void string_filter(char* str, int len, int* bool_arr) {
        
    int state = true, i = 0;

    while(i < len) {
        if(str[i] == 60) {
            state = false;
        }
        if((str[i] >= 32 && str[i] <= 64) || state == false) {
            bool_arr[i] = false;
          } else {
            bool_arr[i] = true;
          }
        if(str[i] == 62){state = true;}
          i++;
    }
    bool_arr[i] = false;
}