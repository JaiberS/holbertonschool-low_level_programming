#include "holberton.h"

/**
 * free_grid - free the grid provided
 * @grid: grid to be freed
 * @height: rows of the grid
 *
 */
void free_grid(int **grid, int height)
{
	int i = 0, *currentgrid;

	for (; i < height; i++)
	{
		currentgrid = grid[i];
		free(currentgrid);
	}
	free(grid);
}

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: columns
 * @height: rows
 *
 * Return: NULL on failure or width or height is 0 or negative
 */
int **alloc_grid(int width, int height)
{
	int **p, i = 0;

	p = malloc(sizeof(int *) * height);
	if (p == NULL)
		return (0);
	if (width <= 0 || height <= 0)
		return (0);
	for (; i < height; i++)
		p[i] = malloc(sizeof(int) * width);
	if (p == NULL)
	{
		free_grid(p, height);
		return (0);
	}
	return (p);
}
