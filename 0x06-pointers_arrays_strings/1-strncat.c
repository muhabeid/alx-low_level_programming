#include "main.h"

/**
 *_strncat - concatenates n bytes from a string to another
 *@author: muhabeid
 *@dest: destination string
 *@src: source string
 *@n: number of bytes of str to concatenate
 *
 *Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = strlen(dest), i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[len + i] = src[i];

	return (dest);
}
