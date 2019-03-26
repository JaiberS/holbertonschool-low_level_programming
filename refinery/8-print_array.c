#include <stdio.h>
#include <stdlib.h>


void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n - 1; i++)
	{
		printf("%i, ", a[i]);
	}
	printf("%i\n", a[i]);
}
