#include <stdio.h>
/**
 * reverse_array - inverts the values of an array
 *@a: array to be reversed
 *@n: number of elements of the array
 *
 */

void reverse_array(int *a, int n)
{
	int i = 0, j;

	n = n - 1;
	for (; n >= i; n--)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
		i++;
	}
}
