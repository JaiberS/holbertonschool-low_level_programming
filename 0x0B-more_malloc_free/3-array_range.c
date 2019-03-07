#include "holberton.h"

/**
 * array_range - creates an array of integers.
 * @min: from this number
 * @max: to this number
 *
 * Return:  the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *p, i = min, j = 0;

	if (min > max)
		return (NULL);
	p = malloc(sizeof(int) * (max - min + 1));
	if (p == NULL)
		return (NULL);
	for (; i <= max; i++, j++)
		p[j] = i;
	return ((void *)p);
}
