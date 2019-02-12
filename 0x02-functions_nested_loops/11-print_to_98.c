#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 -  prints all natural numbers from n to 98
 * @n: Starting number
*/

void print_to_98(int n)
{
	if (n == 98)
	{
		printf("%i", n);
	}
	else
	{
		while (n < 98)
		{
			printf("%i, ", n++);
		}
		while (n > 98)
		{
			printf("%i, ", n--);
		}
		printf("%i", n);
	}
	printf("\n");
}
