#include "main.h"

/**
 * times_table - prints the 9 times table, starting from 0
 * 
 */
void times_table(void)
{
  int number, mult, product;
  for (number = 0; number <= 9; number++)
  {
    _putchar('0');

    for (mult = 1; mult <= 9; mult++)
    {
      _putchar(',');
      _putchar(' ');

      product = number * mult;

      if (product <= 9)
        _putchar(' ');
      else
        _putchar((product / 10) + '0');
        _putchar((product % 10) + '0');
    }
    _putchar('\n');
  }
}