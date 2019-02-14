#include "holberton.h"
/**
 * _ismul -  multiplies two integers
 *@a: a times b
 *@b: a times b
 *
 * Return: the result
*/

void more_numbers(void)
{
	int i, j;

	for (j = 0; j <=9; j++)
	{
		for (i = 0; i <=14; i++)
		{
			if(i >= 10)
				_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
