#include "holberton.h"

/**
 * puts2 - prints the pair string array
 * @str: array to print
 *
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != 0)
	{
		_putchar(str[i]);
		i = i + 2;
	}
	_putchar('\n');
}
