#include "main.h"
/**
 * print_alphabet_x10 -  prints 10 times the alphabet,
 * in lowercase, followed by a new line.
 *
 */
void print_alphabet_x10(void)
{
	int counter;
	char x;

	for (counter = 0; counter <= 9; counter++)
	{
		for (x = 'a'; x <= 'z'; x++)
		{
			_putchar(x);
		}
		_putchar('\n');
	}

}