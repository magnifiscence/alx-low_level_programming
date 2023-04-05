#include "main.h"
int actual_sqrt_recursion(int n' int i);
/**
 * _sqrt_recursion - returns the natural sqare root of a number
 * @n: squrt to be calculated
 * Return: the resulting square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n,0));
}
/**
 * actual_sqrt_recursion. recurses to find the natural
 * sqrt of a number
 * @n: sqrt to be calculated
 * @i: iterator
 * return: the resulting sqrt
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
