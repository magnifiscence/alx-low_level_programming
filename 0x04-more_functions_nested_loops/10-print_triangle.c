#include "main.h"
/**
 * 10-print_triangle.c - prints a triangle followed by a new line
 * @size: size of the triangle
 */
void print_trangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 1; i <= size; i++)
		{
			for (j = i; < size; j++)
			{
				_putchar(' ');
			}
			for (j = 1; j <= i; j++)
			{
				_putchar('0');
			}
			_putchar('\n');
		}
	}
}
