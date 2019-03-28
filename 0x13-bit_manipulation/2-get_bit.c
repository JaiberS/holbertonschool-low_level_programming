#include "holberton.h"

/**
 * get_bit -  returns the value of a bit at a given index.
 * @n: first number
 * @index: second nuber
 *
 * Return: the value of a bit at a given index.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int counter = 0;

	if (index > 32)
		return (-1);
	for (; index > 0; index--)
		n = n >> 1;
	counter = n & 1;
	return (counter);
}
