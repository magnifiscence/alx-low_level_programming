#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - function frees two dimensional grid
 * previously created by alloc_grid
 * @grid: two dimensional grid
 * @height: height of grid
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
