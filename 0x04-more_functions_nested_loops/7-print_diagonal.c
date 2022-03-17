#include "main.h"



/**
 * print_diagonal - draws a diagonal line of length n in the terminal
 * followed by a new line
 *
 * @n: the number of times the character / should be printed
 *
 * Description: If n is 0 or less, the function should only print '\n'
 *
 **/

void print_diagonal(int n)
{
int i;
int j;

for (i = 0; i < n; i++)
{
/* print i spaces */
for (j = 0; j < i; j++)

_putchar(' ');

_putchar('\\');

_putchar('\n');

}

if (n <= 0)
_putchar('\n');
}
