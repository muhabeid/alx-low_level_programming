/**
 * @file 1-array_iterator.c
 * @author Muhabeid (muhabeid@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-04-14
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include "function_pointers.h"

/**
* array_iterator - executes a function given as a
* parameter on each element of an array.
* @array: input integer array.
* @size: size of the array.
* @action: pointer to the function.
*
* Return: no return.
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
  size_t i;

  if (array == NULL || action == NULL)
  return;
  for (i = 0; i < size; i++)
  action(array[i]);
}