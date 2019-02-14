#include "holberton.h"
#include <stdio.h>
/**
 * print_number -  prints n integer number
 * @n: integer number
*/

void print_number(int n)
{
	int i = 0, j, times, a, m0 = 0;

	if (n == -2147483648)
	{
		n = n / 10;
		m0 = 1;
	}
	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
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
	if (m0 == 1)
		_putchar('8');
}
