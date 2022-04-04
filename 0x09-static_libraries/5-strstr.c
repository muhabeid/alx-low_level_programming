#include "main.h"

/**
 * _strstr - find first occurence of needle in haystack
 * @haystack: value to look into
 * @needle: value to look for
 * Return: pointer to beginning of located substring or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}