#include "holberton.h"
/**
 * _ismul -  multiplies two integers
 *@a: a times b
 *@b: a times b
 *
 * Return: the result
*/

void print_diagonal(int n)
{
	int i, j;

	for (i = 1; i <= n; i++)
	{
		j = 1;
		while(j < i)
		{
			_putchar(' ');
			j++;
		}
		_putchar('\\');
		_putchar('\n');
	}
	if(n <= 0)
		_putchar('\n');
}
