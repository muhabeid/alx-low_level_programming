#include "main.h"

/**
 * _strpbrk - locate first occurence of accept in s
 * @s: string to check
 * @accept: value to look for
 * Return: pointer to byte in s that matches one of the bytes in accept
 */
char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}