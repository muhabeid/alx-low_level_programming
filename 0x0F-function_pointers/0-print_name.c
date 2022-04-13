/**
 * @file 0-print_name.c
 * @author Muhabeid (muhabeid@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-04-14
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *print_name - prints a name
 * @name: name to be printed
 * @f: pointer to function
 * Return: name
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	return;
	f(name);
}