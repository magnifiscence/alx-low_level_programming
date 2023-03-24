#include "main.h"
/**
 * 10-print_triangle.c - prints a triangle followed by a new line
 * @size: size of the triangle
 * Return: empty
 */
void print_trangle(int size)
{
	int i, j, k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j =size - i; j > 1; j--)
			{
				_putchar(' ');
			}
			for (k = 1; k <= i; k++)
			{
				_putchar('0');
			}
			_putchar('\n');
		}
	}
}
