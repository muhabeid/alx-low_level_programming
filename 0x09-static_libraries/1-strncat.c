#include "main.h"

/**
 * _strncat - concatenates src to dest while using at most n bytes
 * @dest: destination string
 * @src: source string
 * @n: max number of bytes from src
 * Return: concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = strlen(dest), i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[len + i] = src[i];

	return (dest);
}