#include "main.h"
/**
 * get_bit - function returns value of a bit at a given index.
 * @index: bits index.
 * @n: number to be searched.
 * Return: value of the bit at index
 * -1 if an error occurs
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);
	bit_val = (n >> index) & 1;

	return (bit_val);
}
