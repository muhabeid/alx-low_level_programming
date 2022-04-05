#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src to dest
 * @dest: destination memory area to copy to
 * @src: source memory area to copy from
 * @n: bytes to copy
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}