#include "main.h"

/**
 * _islower - checks if value is lowercase
 * @c: value to be checked
 *
 * Return: 1 if is lowercase, 0 if uppercase
 */
int _islower(int c)
{
	if (islower(c) != 0)
		return (1);
	else
		return (0);
}