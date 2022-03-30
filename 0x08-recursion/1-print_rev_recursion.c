/**
 * @file 1-print_rev_recursion.c
 * @author muhabeid
 * @date 2022-03-30
 * 
 * @copyright Copyright (c) 2022
 */
#include "main.h"

/**
 * @brief: _print_rev_recursion - prints a string in reverse
 * @s: string to print
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}