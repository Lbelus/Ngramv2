#include "../../include/header.h"


node_t *create_new_node(int value, char *str) {
    node_t *result = malloc(sizeof(node_t));
    result->value = value;
    result->count = 0;
    result->str = str;
    result->next = NULL;
    return result;
}

