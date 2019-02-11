#include "holberton.h"
/**
 * main - prind alphabet
 * Return: always returns 0
*/

void times_table(void)
{
	int j=0,a=0,i=0;

	for (;j<10;j++)
	{
		for (;i<10;i++)
		{
			a=j*i;
			if (a/10 == 0)
			{
				if(i!=0)
				{
				_putchar(' ');
				}
				_putchar(a + '0');
			}
			else
			{
				_putchar(a/10 + '0');
				_putchar(a%10 + '0');
			}
			if (i!=9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
		i=0;
	}
}
