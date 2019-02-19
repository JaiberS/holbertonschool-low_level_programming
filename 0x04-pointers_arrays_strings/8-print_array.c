#include "holberton.h"
#include <stdio.h>

/**
 * print_array - prints n elements of string array
 * @a: string to print
 * @n: n elements
 *
 */

void print_array(int *a, int n)
{
	int s = 0;

	for (; s < n - 1; s++)
		printf("%i, ", a[s]);
	printf("%i\n", a[s]);
}
