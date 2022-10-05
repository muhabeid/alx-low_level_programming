#include "search_algos.h"

/**
 * linear_search - linear search implementation
 * @array: string
 * @size: size_t
 * @value: value
 * Return: int, index of the value
 */

int linear_search(int *array, size_t size, int value)
{
size_t i;

if (array == NULL)
	return (-1);

for (i = 0; i < size; i++)
{
	printf("Value checked array[%li] = [%i]\n", i, array[i]);
	if (array[i] == value)
		return (i);
}
return (-1);
}
