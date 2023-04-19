#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - executes a function given as parameter
 * on each element of an array.
 * @array: array
 * @size: number of elements to print
 * @action: pointer to print in hex or reg
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
