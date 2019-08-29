#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdio.h>
#include <stdlib.h>

int binary_search(int *array, size_t size, int value);
int linear_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
int recursion_search(int *array, size_t size, int value, size_t k, size_t s);
int jump_search(int *array, size_t size, int value);

#endif /* SEARCH_ALGOS_H */
