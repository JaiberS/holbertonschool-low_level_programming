#include "holberton.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: columns
 * @height: rows
 *
 * Return: NULL on failure or width or height is 0 or negative
 */
int **alloc_grid(int width, int height)
{
	int **p =  malloc(sizeof(int[height])), i = 0;

	if (p == NULL)
		return (0);
	if (width <= 0 || height <= 0)
		return (0);
	for (; i < height; i++)
		p[i] = malloc(sizeof(int[width]));
	return (p);
}
