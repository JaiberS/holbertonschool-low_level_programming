#include "holberton.h"
/**
 * _ismul -  multiplies two integers
 *@a: a times b
 *@b: a times b
 *
 * Return: the result
*/

void print_square(int size)
{
	int i, j;

	for (i = 1; i <= size; i++)
	{
		for(j = 1; j <= size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if(size <= 0)
		_putchar('\n');
}
