#include "main.h"
/**
 * get_bit - function returns value of a bit at a given index
 * @n: number whose index is to be found
 * @index: bit index
 * Return: value of bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);
	bit_val = (n >> index) & 1;
	return (bit_val);
}
