/**
 * @file variadic_functions.h
 * @author Muhabeid (muhabeid@gmail.com)
 * @brief Header file
 * @version 0.1
 * @date 2022-04-14
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef VARIADIC_H
#define VARIADIC_H
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int _putchar(char c);

void print_int(va_list list);
void print_float(va_list list);
void print_char(va_list list);
void print_str(va_list list);

/**
 * struct printTypeStruct - structure definition of a printTypeStruct
 * @type: type
 * @printer: function to print
 */
typedef struct printTypeStruct
{
char *type;
void (*printer)(va_list);
} printTypeStruct;

#endif