#include "holberton.h"
/**
 * main - prind alphabet
 * Return: always returns 0
*/

void jack_bauer(void)
{
	int j = 0, s = 0;
	for (;j < 24;j++)
	{
		for (; s < 60; s++)
		{
			_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
			_putchar(':');
			_putchar(s / 10 + '0');
			_putchar(s % 10 + '0');
			_putchar('\n');
		}
		s = 0;
	}
}
