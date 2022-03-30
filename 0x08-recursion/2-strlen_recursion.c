/**
 * @file 2-strlen_recursion.c
 * @author muhabeid
 * @date 2022-03-30
 * 
 * @copyright Copyright (c) 2022
 */
#include "main.h"

/**
 * @brief: _strlen_recursion - returns the length of a string
 * @s: string to calculate the length of
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}