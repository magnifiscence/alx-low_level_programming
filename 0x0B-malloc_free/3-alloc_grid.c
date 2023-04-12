#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - function returns array to two dimensional
 * array of integers i.e nested loops to make grid
 * @width: input
 * @height: input
 * Return: pointer to two dimensional array on success
 * NULL on failure or width and height is negative
 */
int **alloc_grid(int width, int  height)
{
	int **m;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);
	m = malloc(sizeof(int *) * height);
	if (m == NULL)
		return (NULL);
	for (x = 0; x < height; x++)
	{
		m[x] = malloc(sizeof(int) * width);
		if (m[x] == NULL)
		{
			for (; x >= 0; x--)
				free(m[x]);
			free(m);
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			m[x][y] = 0;
	}
	return (m);
}
