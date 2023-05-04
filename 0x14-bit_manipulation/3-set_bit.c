#include "main.h"
/**
 * set_bit - function sets value of a bit to 1 at a given index.
 * @index: index at which bit is set to 1.
 * @n:pointer to number that is to be changed.
 * Return: 1 success
 * -1 failure.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = ((1UL << index) | *n);
	return (1);
}
