/**
 * @file 0-sum_them_all.c
 * @author Muhabeid (muhabeid@gmail.com)
 * @brief Sum them all
 * @version 0.1
 * @date 2022-04-14
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include "variadic_functions.h"

/**
* sum_them_all - returns the sum of all its parameters.
* @n: amount of the arguments.
*
* Return: sum of its parameters.
*/
int sum_them_all(const unsigned int n, ...)
{
va_list valist;
unsigned int i;
int sum = 0;

if (n == 0)
return (0);

va_start(valist, n);

for (i = 0; i < n; i++)
sum += va_arg(valist, int);

va_end(valist);

return (sum);
}