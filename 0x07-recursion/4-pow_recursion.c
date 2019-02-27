#include "holberton.h"
#include <stdio.h>

/**
 * power - returns the value of x raised to the power of y.
 * @x: number to be raised
 * @y: power of the number
 * @j: storage of the result
 *
 * Return: The value of x raised to the power of y.
 */

int power(int x, int y, int j)
{
	if (y < 0)
		return (-1);
	if (y > 0)
	{
		j = j * x;
		y--;
		j = power(x, y, j);
	}
	return (j);
}


/**
 * _pow_recursion - returns the value of x raised to the power of y.
 * @x: number to be raised
 * @y: power of the number
 *
 * Return: The value of x raised to the power of y.
 */

int _pow_recursion(int x, int y)
{
	int j =  power(x, y, 1);

	return (j);
}
