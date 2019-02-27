#include "holberton.h"
#include <stdio.h>

/**
 * jsqrt -returns the natural square root of a number.
 * @n: number to get the root
 * @j: storage of the root
 *
 * Return: the natural square root of a number.
 */

int jsqrt(int n, int j)
{
	if (j * j > n)
		return (-1);
	if (j * j == n)
	{
		return (j);
	}
	else
	{
		j++;
		j = jsqrt(n, j);
	}
	return (j);
}


/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number to get the root
 *
 * Return: the natural square root of a number.
 */

int _sqrt_recursion(int n)
{
	int j =  jsqrt(n, 1);

	return (j);
}
