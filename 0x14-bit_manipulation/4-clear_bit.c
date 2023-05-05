#include "main.h"
/**
 * clear_bit - function sets value of a bit to zero at a given index.
 * @index: index of the bit starting from 0 of the bit to be set.
 * @n: pointer to bit.
 * Return: 1 if it works
 * -1 if failure.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (~(1UL << index) & *n);
	return (1);
}
