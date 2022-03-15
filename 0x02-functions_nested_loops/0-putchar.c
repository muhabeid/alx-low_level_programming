#include "main.h"

/* Declaration of print_putchar function */
void print_putchar(void)

/**
 * main - Entry Point
 * 
 * Return: Always 0 (success)
 */

int main(void)
{
    print_putchar();
    return(0);
}

/**
 * print_putchar - writes _putchar string to the stdout
 */

void print_putchar(void)
{
    _putchar('_');
    _putchar('p');
    _putchar('u');
    _putchar('t');
    _putchar('c');
    _putchar('h');
    _putchar('a');
    _putchar('r');
    _putchar('\n');
    return(0);
}