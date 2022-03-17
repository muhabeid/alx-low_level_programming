#include <stdio.h>


/**
 * main - Fizz-Buzz test from 1 - 100
 *
 * Description:
 *
 * - prints the numbers from 1 to 100, followed by a new line
 * - for multiples of three print Fizz instead of the number
 * - for the multiples of five print Buzz
 * - For numbers which are multiples of both three and five print FizzBuzz
 *
 * Return: Always 0.
 *
 **/

int main(void)
{
int i;

for (i = 1; i <= 100; i++)
{
if (i % 15 == 0)
printf("FizzBuzz");
else if
(i % 5 == 0)
printf("Buzz");
else if
(i % 3 == 0)
printf("Fizz");									else
printf("%d", i);
if (i < 100)
printf(" ");
else
printf("\n");
}

return (0);
}
