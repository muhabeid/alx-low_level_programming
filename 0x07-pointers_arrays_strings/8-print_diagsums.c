/**
 * @file 8-print_diagsums.c
 * @author your name (you@domain.com)
 * @date 2022-03-28
 * 
 * @copyright Copyright (c) 2022
 */
#include <stdio.h>
#include "main.h"

/**
 * @brief: print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: square matrix of which we print the sum of diagonals
 * @size: size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int i;

	unsigned int sum, sum1;

	sum = 0;
	sum1 = 0;

	for (i = 0; i < size; i++)
	{
		sum += a[(size * i) + i];
		sum1 += a[(size * (i + 1)) - (i + 1)];
	}

	printf("%d, %d\n", sum, sum1);
}