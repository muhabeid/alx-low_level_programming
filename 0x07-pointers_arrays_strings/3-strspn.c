/**
 * @file 1-memcpy.c
 * @author muhabeid
 * @date 2022-03-28
 * 
 * @copyright Copyright (c) 2022
 */
#include <main.h>
/**
 * @brief _strspn - gets the length of a prefix substring.
 * @s: initial segment.
 * @accept: accepted bytes.
 * Return: the number of accepted bytes.
 */
unsigned int _strspn(char *s, char *accept)
{
  unsigned int i, j, bool;

  for (i = 0; *(s + i) != '\0'; j++)
  {
    bool = 1;
    for (j = 0; *(accept + j) != '\0'; j++)
    {
      if (*(s + i) == *(accept + j))
      {
        bool = 0;
        break;
      }
    }
    if (bool == 1)
    break;
  }
  return (i);
}