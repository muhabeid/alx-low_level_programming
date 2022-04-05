#include "main.h"

/**
 * _isdigit - checks if value is a digit
 * @c: value to be checked
 * Return: 1 if true, 0 otherwise
 */
int _isdigit(int c)
{
	int res;

	if (isdigit(c))
		res = 1;
	else
		res = 0;

	return (res);
}