/**
 * @file 7-print_chessboard.c
 * @author muhabeid
 * @date 2022-03-28
 * 
 * @copyright Copyright (c) 2022
 */
#include "main.h"

/**
 * @brief: print_chessboard - prints the chessboard
 * @a: two dimension array to print
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}