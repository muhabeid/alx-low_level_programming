#include "main.h"

/**
 * _strncpy - copies from src to dest using at most n bytes
 * @dest: destination string to copy to
 * @src: source string to copy from
 * @n: max number of bytes of src
 * Return: string
 */
char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}