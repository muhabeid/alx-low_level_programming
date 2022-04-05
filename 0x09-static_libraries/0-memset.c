#include "main.h"

/**
 * _memset - Fills the first n bytes of the memory area
 *			pointed to by @s with the constant byte @c.
 * @s: pointer to char params
 * @b: data to change
 * @n: index
 * Return: *s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}