#ifndef SEARCH_ALGO_H
#define SEARCH_ALGO_H

#include <stddef.h>
#include <stdio.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print_array(int *a, int i, int j);

#endif
