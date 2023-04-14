#include "main.h"
#include <stdlib.h>
/**
 * *array_range - function creates an array of integers
 * @min: minimum range of values to be stored
 * @max: maximum range of elements stored which is the
 * total number of elements.
 * Return: pointer to the new array
 * if min > max return NULL
 * if malloc fails return NULL
 */
int *array_range(int min, int max)
{
	int *pointer;
	int i;
	int size;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	pointer = malloc(sizeof(int) * size);
	if (pointer == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
		pointer[i] = min++;
	return (pointer);
}
