/**
 * @file 100-set_string.c
 * @author muhabeid
 * @date 2022-03-28
 * 
 * @copyright Copyright (c) 2022
 */
#include "main.h"

/**
 * @brief: set_string - sets the value of a pointer to a char
 * @s: pointer to pointer we need to set to
 * @to: string to set
 */
void set_string(char **s, char *to)
{
	*s = to;
}