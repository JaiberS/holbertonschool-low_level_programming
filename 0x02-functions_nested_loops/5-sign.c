#include "holberton.h"
/**
 * print_sign - prints the sign of the number
 * @n: The number to be checked
 *
 * Return: 1 positive 0 = 0 -1 negative
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
