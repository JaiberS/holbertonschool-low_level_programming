#include "holberton.h"

/**
 * free_grid - free the grid provided
 * @grid: grid to be freed
 * @height: rows of the grid
 *
 */
void free_grid(int **grid, int height)
{
	int i, *currentgrid;

	for (; i < height; i++)
	{
		currentgrid = grid[i];
		free(currentgrid);
	}
}
