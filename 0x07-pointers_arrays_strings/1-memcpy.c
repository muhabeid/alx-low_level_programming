/**
 * @file 1-memcpy.c
 * @author muhabeid
 * @brief 
 * @version 0.1
 * @date 2022-03-28
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include "main.h"
/**
 * @brief *_memcpy - copies memory area
 * @dest: destination memory area 
 * @src: source memory area
 * @n: bytes filled
 * Return: the pointer to dest.
 * 
 */
char *_memcpy(char *dest, char *srs, unsigned int n)
{
  unsigned int i;
  
  for (i = 0; i < n; i++)
    *(dest + 1) = *(src + 1);

  return (dest);
}