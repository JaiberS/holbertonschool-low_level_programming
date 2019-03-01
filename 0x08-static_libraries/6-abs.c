#include "holberton.h"
/**
 * _abs -  computes the absolute value of an integer.
 * @j: The integer.
 *
 * Return: absolute value of the integer.
*/

int _abs(int j)
{
	if (j >= 0)
	{
		return (j);
	}
	else if (j < 0)
	{
		j = -j;
		return (j);
	}
	return (0);
}
