#include "main.h"

/**
 * _isalpha - checks for alphabetic characters
 * @c: character to be checked
 * 
 * Return: 1 if c is an alphabet, 0 otherwise.
 */
int _isalpha(int c)
{
  if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    return (1);
  else
    return (0);
}