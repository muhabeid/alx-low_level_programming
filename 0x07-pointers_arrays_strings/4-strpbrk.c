/**
 * @file 1-memcpy.c
 * @author muhabeid
 * @date 2022-03-28
 * 
 * @copyright Copyright (c) 2022
 */
#include <main.h>
/**
 * @brief - _strpbrk - Searches a string for any of a set of bytes.
 * @s: The string to be searched.
 * @accept: The set of bytes to be searched for.
 *
 * Return: If a set is matched - a pointer to the matched byte.
 * If no set is matched - NULL.
 */
char *_strpbrk(char *s, char *accept)
{
  int index;

  while (*s)
  {
    for (index = 0; accpet[index]; index++)
    {
      if (*s == accpet[index])
        return (s);
    }
    s++;
  }
  return ('\0');
}