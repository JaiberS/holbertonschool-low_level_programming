#include "holberton.h"

/**
 * clear_bit -  sets the value of a bit to 0 at a given index.
 * @n: number in decimal
 * @index:  index, starting from 0 of the bit you want to get
 *
 * Return: the value of the bit at index index or -1 if an error occured
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int cmp = 1, i = 0;

	if (index > 32)
		return (-1);
	for (; cmp << 1 <= *n && cmp < 2147483648; i++)
	{
		cmp = cmp << 1;
		cmp = cmp | 1;
	}
	i = index;
	for (; index > 0; index--)
		cmp = cmp >> 1;
	cmp = cmp << 1;
	if (cmp != 0)
	{
		for (; i > 0; i--)
		{
			cmp = cmp << 1;
			cmp = cmp | 1;
		}
	}
	else
	{
		for (; i > 1; i--)
		{
			cmp = cmp << 1;
			cmp = cmp | 1;
		}
	}
	*n = *n & cmp;
	return (1);
}
