/*

|B
|y        ┌────────────────────────────────────────────────────────────9─────────────────────────────────────┐
|         |abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrst|
|L        |1┌─────────────────────6───────────────────────────────5────────────────────────────────────────┐9|
|U        |2|   b           r                l                                4                 7       u  |8|
|L        |3|    2       ███╗   ███╗██╗   ██╗    ███╗   ██╗ ██████╗ ██████╗  █████╗ ███╗   ███╗   g        |7|
|O        |4|            ████╗ ████║╚██╗ ██╔╝    ████╗  ██║██╔════╝ ██╔══██╗██╔══██╗████╗ ████║        n   |6|
|         |5|       5    ██╔████╔██║ ╚████╔╝  4  ██╔██╗ ██║██║ 3███╗██████╔╝███████║██╔████╔██║            |5|
|2        |6| x          ██║╚██╔╝██║  ╚██╔╝      ██║╚██╗██║██║   ██║██╔══██╗██╔══██║██║╚██╔╝██║      6     |4|
|0        |7|         y  ██║ ╚═╝ ██║   ██║  h    ██║ ╚████║╚██████╔╝██║8 ██║██║  ██║██║ ╚═╝ ██║        i   |3|
|2        |8|  t         ╚═╝  0  ╚═╝   ╚═╝       ╚═╝  ╚═══╝ ╚═════╝ ╚═╝  ╚═╝╚═╝  ╚═╝╚═╝ j   ╚═╝  z         |2|
|2        |9└──────────────────────────────────────────────────────────────────────────p───────────────────┘1|
|         |abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrst|
|         └─────────────────────────────────────────────1────────────────────────────────────────────────────┘
|
*/

#include "../../../include/header.h"


int my_ngram(int size_arr, char** str_arr){

    int *array = malloc(sizeof(int*)*SIZE_MAX);
    my_bzero(array, sizeof(int*)*SIZE_MAX);
    char_ngram(array, str_arr, size_arr);
    write_char_ngram(array);

    free(array);
    return 0;
}      
