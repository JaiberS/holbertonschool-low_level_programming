#include "holberton.h"
#include <stdio.h>

/**
 * _memset -  fills memory with a constant byte
 * @s: memory to be filled
 * @b: constant byte
 * @n: until n
 *
 *Return: Returns a pointer to the memory area s
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
	printf("%i, %i\n", i2,j2);
}
