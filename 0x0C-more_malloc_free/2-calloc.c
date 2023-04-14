#include "main.h"
#include <stdlib.h>
/**
 * *_memset - function allocates memory for an array
 * filling it with constant bytes
 * @s: memory to be filled
 * @b: char to be copied
 * @n: number of times b is copied
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

/**
 * *_calloc - function allocates memory for an array
 * @m: number of elements in the array
 * @size: size of each element
 * Return: pointer to array
 */
void *_calloc(unsigned int m, unsigned int size)
{
	char *ptr;

	if (m == 0 || size == 0)
		return (NULL);
	ptr = malloc(size * m);
	if (ptr == NULL)
		return (NULL);
	_memset(ptr, 0, m * size);
	return (ptr);
}
