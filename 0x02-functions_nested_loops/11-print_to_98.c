#include "holberton.h"
#include <stdio.h>
/**
 * main - prind alphabet
 * Return: always returns 0
*/

void print_to_98(int n)
{
	if(n == 98)
	{
		printf("%i",n);
	}
	else
	{
		while (n<98)
		{
			printf("%i, ",n++);
		}
		while (n>98)
		{
			printf("%i, ",n--);
		}
		printf("%i",n);
	}
	printf("\n");
}
