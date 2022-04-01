#include <stdio.h>
#include <stdlib.h>

/**
 * main - Adds positive numbers
 * @argc: Number of arguments passed to the program
 * @argv: Array of strings passed as arguments to the program
 *
 * Return: 0 for success, 1 for an error
 */

int main(int argc, char **argv)
{
	int i, j, sum;

	sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] < 48 || argv[i][j] > 57)
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}

	if (argc <= 1)
	{
		printf("0\n");
	}
	else
		printf("%d\n", sum);

	return (0);
}