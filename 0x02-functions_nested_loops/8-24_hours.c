#include "holberton.h"
/**
 * jack_bauer - prints every minute of the day, starting from 00:00 to 23:59.
*/

void jack_bauer(void)
{
	int j = 0, s = 0;

	for (; j < 24; j++)
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
