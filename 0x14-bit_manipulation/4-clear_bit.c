#include "main.h"
/**
 * clear_bit - function assigns the value of a bit to 0
 * @n: pointer to bit
 * @index: represents index of bit to be cleared
 * Return: 1 for success
 * -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (~(1UL << index) & *n);
	return (1);
}
