#include "holberton.h"
/**
 * main - prind alphabet
 * Return: always returns 0
*/

void print_times_table(int n)
{
	int j=0,a=0,i=0;

	if(n < 15 && n > 0)
	{
	for (;j<n+1;j++)
	{
		for (;i<n+1;i++)
		{
			a=j*i;
			if (a/10 == 0)
			{
				if(i!=0)
				{
				_putchar(' ');
				_putchar(' ');
				}
				_putchar(a + '0');
			}
			else
			{
				if (a/100 !=0)
				{
					_putchar((a/10)/10 + '0');
					_putchar((a/10)%10 + '0');
					_putchar(a%10 + '0');
				}
				else
				{
					_putchar(' ');
				_putchar(a/10 + '0');
				_putchar(a%10 + '0');
				}
			}
			if (i!=n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
		i=0;
	}
	}
}
