#include "main.h"

/**
 * _isalpha - checks if value is alphabetic
 * @c:  input value
 *
 * Return: 1 if c is a letter, otherwise return 0
 */
int _isalpha(int c)
{
	if (isalpha(c) != 0)
		return (1);
	else
		return (0);
}