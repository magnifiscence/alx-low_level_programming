#include "main.h"
/**
 * flip_bits - funtion that returns number of bits to flipped to get from
 * one number to the next.
 * @n: represents first number
 * @m: represents second number
 * Return: number of bits to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int j, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (j = 63; j >= 0; j--)
	{
		current = exclusive >> j;
		if (current & 1)
			count++;
	}
	return (count);
}
