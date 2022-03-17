#include "main.h"


/**
 * print_square - prints a square of length size in the terminal using #
 * followed by a new line
 *
 * @size: the length of the square
 *
 * Description: If size is 0 or less, the function should print only a new line
 *
 **/

void print_square(int size)
{
int i;

int j;

for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)

_putchar('#');


_putchar('\n');
												}

if (size <= 0)
_putchar('\n');

}
