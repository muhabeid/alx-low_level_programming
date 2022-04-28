/**
 * @file 0-binary_to_uint.c
 * @author Muhabeid (muhabeid@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-04-28
 * 
 * @copyright Copyright (c) 2022
 */
#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int dec_val = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		dec_val = 2 * dec_val + (b[i] - '0');
	}

	return (dec_val);
}