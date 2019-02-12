#include "holberton.h"
/**
 * print_times_table - prints the n times table, starting with 0.
 * @n: n times table
*/

void print_times_table(int n)
{
	int j = 0, a = 0, i = 0;

		for (; j < n + 1; j++)
		{
			for (; i < n + 1; i++)
			{
				a = j * i;
				if (a >= 0 && a < 10 && n < 15)
				{
					if (i != 0)
					{
						_putchar(' ');
						_putchar(' ');
					}
					_putchar(a + '0');
				}
				if (a >= 10 && a < 100 && n < 15)
				{
					if (i != 0)
						_putchar(' ');
					_putchar(a / 10 + '0');
					_putchar(a % 10 + '0');
				}
				if (a >= 100 && n < 15)
				{
					_putchar(a / 100 + '0');
					_putchar((a / 10) % 10 + '0');
					_putchar(a % 10 + '0');
				}
				if (i != n && n < 15)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			if (n < 15)
			_putchar('\n');
			i = 0;
		}
}
