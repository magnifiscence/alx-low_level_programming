#include "main.h"
/**
 * 1-swap.c - swaps the value of the two intergers
 * @a: integer to swap
 * @b: integer to swap
 * @m: integer variable
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
