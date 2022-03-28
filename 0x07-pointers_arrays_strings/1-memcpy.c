/**
 * @file 0-memset.c
 * @author muhabeid
 * @date 2022-03-28
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include "main.h"

/**
 * @brief: *_memcpy - copies memory area
 * @dest: destination memory area
 * @src: memory area to copy from
 * @n: number of bytes to copy
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}