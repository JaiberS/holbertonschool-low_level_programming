#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - adds the diags of the array
 * @a: the array
 * @size: the size of the array
 *
 */

void print_diagsums(int *a, int size)
{
	int i = 0, j = 0, i2 = 0, j2 = 0, k = 0;

	for (; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (j == i)
				i2 = i2 + a[k];
			if (j + i == size - 1)
				j2 = j2 + a[k];
			k++;
		}
	}
	printf("%i, %i\n", i2, j2);
}
