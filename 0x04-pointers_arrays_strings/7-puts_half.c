#include "holberton.h"

/**
 * puts_half - prints the half string array
 * @str: array to print
 *
 */

void puts_half(char *str)
{
	int i = 0, s;

	while (str[i] != 0)
		i++;
	i--;
	if (i % 2 == 0)
		s = i;
	else
		s = (i - 1) / 2;
	for (; s < i; s++)
		_putchar(str[s + 1]);
	_putchar('\n');
}
