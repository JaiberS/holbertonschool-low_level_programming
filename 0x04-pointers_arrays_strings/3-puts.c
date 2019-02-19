#include "holberton.h"

/**
 * _strlen - checks the lenght of the string value
 * @s: Value to be checked
 *
 * Return: lenght of the string value
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != 0)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
