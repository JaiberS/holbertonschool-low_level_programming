#include "holberton.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: columns
 * @heigh: rows
 *
 * Return: NULL on failure or width or height is 0 or negative
 */
int **alloc_grid(int width, int height)
{
	int *j[height], **p = j, i = 0;

	for (; i < width; i++)
	{
		j[i] = malloc(sizeof(int) * width);
	}
	return(p);
}
