/**
 * @file 0-puts_recursion.c
 * @author muhabeid
 * @date 2022-03-30
 * 
 * @copyright Copyright (c) 2022
 */
#include "main.h"

/**
 * @brief: _puts_recursion - prints a string, followed by a new line
 * @s: string to print
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}