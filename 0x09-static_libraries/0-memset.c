#include "main.h"

/**
 * _memset - fills the first n bytes of the memory area pointed to by s with b
 * @s: pointer to string
 * @b: constant byte
 * @n: number of bytes
 * Return: pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (s);
}