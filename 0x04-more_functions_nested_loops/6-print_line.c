#include "main.h"


/**
 * print_line - draws a straight line of length n in the terminal
 * followed by a new line
 *
 * @n: the number of times the character _ should be printed
 *
 * Description: If n is 0 or less, the function should only print ''\n'
 *
 **/

void print_line(int n)
{
	int i;

	for (i = n; i > 0; i--)
		_putchar('_');

	_putchar('\n');
}
