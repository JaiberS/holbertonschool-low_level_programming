#include "holberton.h"

/**
 * set_bit -  sets the value of a bit to 1 at a given index.
 * @n: number in decimal
 * @index:  index, starting from 0 of the bit you want to get
 *
 * Return: the value of the bit at index index or -1 if an error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int cmp = 1;

	if (index > 32)
		return (-1);
	for (; index > 0; index--)
		cmp = cmp << 1;
	*n = *n | cmp;
	return (1);
}
