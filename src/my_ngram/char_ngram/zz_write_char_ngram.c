#include "../../../include/header.h"

void write_char_ngram(int* array) {
    int index = 0, nbr = 0, len = 0;
    char buffer[5] = {0};
    
    my_bzero(buffer, my_strlen(buffer));

      while(index < SIZE_MAX) {  
        if(array[index] > 0){
            nbr =  (int)array[index] + 48;
            write(1, &index, 1);
            write(1,":",1);
            
            if(nbr >= 58){
                nbr = nbr - 48;
                their_itoa(nbr, buffer, BASE_DECIMAL);
                len = my_strlen(buffer);
                write(1, buffer,len);
            } else {
                write(1, &nbr, 1);
            }
            write(1,"\n",1);
        }
        index++;
    }
}