#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * Numbers must be separated by a comma, followed by a space
 * Numbers should be printed in order 
 * 1st printed number should be the number passed to the function
 * last number should be 98
 */
void print_to_98(int n)
{
  int i, j;

  if (n <= 98)
  {
    for (i = n; i <= 98; i++)
    {
      if (i != 98)
        printf("%d, ", i);
      else if (i == 98)
        printf("%d\n", i);
    }
  }
  else if (n >= 98)
  {
    for (j = n; j >= 98; j--)
    {
      if (j != 98)
        printf("%d, ", j);
      else if (j == 98)
        printf("%d\n", j);
    }
  }
}