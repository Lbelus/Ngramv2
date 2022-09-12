#ifndef __HEADERFILE_H_
#define __HEADERFILE_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h> /* for fork */



#define MAXARGS 256
#define OCTAL 8
#define DECIMAL 10
#define HEXADECIMAL 16

    #ifndef STRUCT_STRING_ARRAY
    #define STRUCT_STRING_ARRAY
    typedef struct s_string_array
    {
        int size;
        char** array;

    } string_array;
    #endif

    #ifndef STRUCT_INTEGER_ARRAY
    #define STRUCT_INTEGER_ARRAY
    typedef struct STRUCT_INTEGER_ARRAY
    {
        int size;
        int* arr;
    } integer_array;
    #endif

    #ifndef STRUCT_NODE
    #define STRUCT_NODE
    struct node {
        int value;
        int count;
        char*str;
        struct node* next;
    };
    typedef struct node node_t;
    #endif

//#define EXIT_STATUS = "int fail"
#define SIZE_MAX 128 // index for char_ngram 
#define BASE_DECIMAL 10
#define SIZE 512 // cat max buffer size

string_array* html_cleaner(char *str);
void string_filter(char* str, int len, int* bool_arr) ;
void check_bool(int len, int*bool_arr, char* str);
void dynamic_malloc(char ** arr, int* bool_arr, int len , int size_arr);
void generate_array(char ** arr, char* str, int* bool_arr, int len);
int get_array_size(int* bool_arr, int len);

string_array* store_arrays(char** str_arr, int size_arr);
integer_array* count_array(string_array* str_arr);

void free_array(char** arr, int size_arr);
void free_array02(int* arr, int size_arr);
int my_strlen(char *str);
string_array* last_word(char *str);

bool my_is_sort(int* int_array, int len);
void selectionSort(int *arr, int n , char ** str_array);
void mergeSort(int *arr, int l, int r, char ** str_arr);
void merge(int *arr, int l, int m, int r, char ** str_arr);

void swap(int* xp, int* yp);
void swap02(int** xp, int** yp);
char *** search(char ** products, int productsSize, char * searchWord);

char* their_itoa(int value, char* result, int base);
void my_revswap(char *ptr, char*ptr1, char tmp_char);
void my_revswap02(char **ptr, int size_arr);

int my_ngram(int size_arr, char** str_arr);
void my_bzero(void *generic_ptr, size_t n);
int char_ngram(int* array, char** arr, int size_arr);
void write_char_ngram(int* array);
void char_ngram_to_table(int* array);
void count_word(node_t *head, char *str_arr);

int my_strcmp(char* str1, char* str2);

int node_main(char ** str_arr, int arr_size) ;
node_t *create_new_node(int value, char *str);
void delete_node(node_t **head, int key);
node_t *find_node(node_t *head, int value);
void free_node(node_t *head);
void insert_after_node(node_t *node_to_insert, node_t *newnode);
node_t *insert_at_head(node_t **head, node_t *node_to_insert);
void reverse_node_order(node_t **head);
void test_print_list(node_t *head);


#endif