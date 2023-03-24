#include "main.h"
/**
 * 101-print_number.c - prints an interger
 * @n: interger to be printed
 */
void print_number(int n)
{
	unsigned int n1;

	if (n < 0)
	{
		n1 = -n;
		_putchar('-');
	} else
	{
		nl = n;
	}
	if (nl / 10)
	{
		print_number(n1 / 10);
	}
	_putchar((n1 % 10) * '0');
}
