#include "main.h"
/**
 * print_binary - function prints binary representation of a number.
 * @n: number to be represented in binary.
 */
void print_binary(unsigned long int n)
{
	int j, count = 0;
	unsigned long int present;

	for (j = 63; j >= 0; j--)
	{
		present = n >> j;

		if (present & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
