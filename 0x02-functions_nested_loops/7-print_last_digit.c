#include "holberton.h"
/**
 * print_last_digit - prints the last digit of a number.
 * @j: The number to get the last digit.
 *
 * Return: Returns the value of the last digit
*/

int print_last_digit(int j)
{
	j = j % 10;
	if (j < 0)
	{
		j = -j;
	}
	_putchar(j + '0');
	return (j);
}
