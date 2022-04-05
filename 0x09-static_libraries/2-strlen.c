#include "main.h"

/**
 * _strlen - Gets length of passed string
 *
 * @s: Pointer to a String
 *
 * Return: The length of @s
 */
int _strlen(char *s)
{
	int i = 0;
	char c = s[0];

	while (c != '\0')
	{
		i++;
		c = s[i];
	}

	return (i);
}