#include "main.h"
/**
 * flip_bits - function returns the number of bits you would
 * need to flip to get from one number to another.
 * @n: 1st member to be flipped.
 * @m: 2cd member to be flipped.
 * Return: number of bits to be flipped.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int present;
	unsigned long int exclusive = n ^ m;
	int j = 0;
	int count = 0;

	for (j = 63; j >= 0; j--)
	{
		present = exclusive >> j;
		if (present & 1)
			count++;
	}
	return (count);
}
