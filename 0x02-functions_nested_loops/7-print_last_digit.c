#include "holberton.h"
/**
 * main - prind alphabet
 * Return: always returns 0
*/

int print_last_digit(int j)
{
	if (j < 0)
        {
                j = -j;
	}
	j = j % 10;
	_putchar(j + '0');
	return(j);
}
