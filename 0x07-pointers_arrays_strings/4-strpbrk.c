/**
 * @file 4-strpbrk.c
 * @author muhabeid
 * @date 2022-03-28
 * 
 * @copyright Copyright (c) 2022
 */
#include <main.h>
#include <stdio.h>

/**
 * @brief *_strpbrk - searches a string for any of a set of bytes
 * @s: string to search
 * @accept: string containing the bytes to look for 
 * 
 * Return: pointer to the byte in s that matches one of the bytes in accept or NULL if no such is found
 */
char *_strpbrk(char *s, char *accept)
{
  int i, j;

  for (i = 0; *s != '\0'; i++)
  {
      for (j = 0; accept[j] != '\0'; j++)
      {
          if (*s == accept[j])
          {
              return (s);
          }
      }
      s++;
  }
  return (NULL);
}