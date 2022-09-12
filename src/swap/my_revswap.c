#include "../../include/header.h"

void my_revswap(char *ptr, char*ptr1, char tmp_char) {
    while(ptr1 < ptr) {
		tmp_char = *ptr;
		*ptr--= *ptr1;
		*ptr1++ = tmp_char;
	}
}


void my_revswap02(char **ptr, int size_arr) {
    
	int index = 0, rev = size_arr -1;
	char **start = ptr, **end = ptr, *tmp_ptr;

	while(index < rev) {    
        tmp_ptr = end[rev];
        end[rev] = start[index];
        start[index] = tmp_ptr;
        index++;
        rev--; 
    }
}

