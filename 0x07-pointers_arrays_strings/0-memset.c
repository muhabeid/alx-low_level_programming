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
 * @brief - A function that fills memory with a constant byte.
 * @s: memory area
 * @b: constant byte
 * @n: bytes filled
 * Return: the pointer to dest
 */
char *_memset(char *s, char b, unsigned int n)
{
  unsigned int i;
  for (i = 0; i < n; i++)
  {
    s[i] = b;
  }
  return (s);
}