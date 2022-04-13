/**
 * @file function_pointers.h
 * @author Muhabeid (muhabeid@gmail.com)
 * @brief Header file
 * @version 0.1
 * @date 2022-04-14
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef FUNCTION_POINTER_H
#define FUNCTION_POINTER_H

#include <stdlib.h>
int _putchar(char c);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));

#endif