#include "holberton.h"
/**
 * print_number -  prints n integer number
 * @n: integer number
*/

void print_number(int n)
{
	int i = 0, j, times, a;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	j = n;
	while (j / 10 != 0)
	{
		i++;
		j = j / 10;
	}
	for (; i > 0; i--)
	{
		times = 10;
		for (a = 1; a < i; a++)
			times = times * 10;
		_putchar(((n / times) % 10) + '0');
	}
	_putchar((n % 10) + '0');
}
