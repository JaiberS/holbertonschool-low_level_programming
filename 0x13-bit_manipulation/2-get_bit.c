#include "holberton.h"

/**
 * get_bit -  returns the value of a bit at a given index.
 * @n: number in decimal
 * @index:  index, starting from 0 of the bit you want to get
 *
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int numbern = 0, number = 0, receiv = 1, i = 0, k = 0;
	int lastbit = 0;

	for (receiv = 1; numbern + receiv <= n ; i++)
	{
		number = receiv;
		receiv *= 2;
	}
	if (index > i - 1)
		return (-1);
	if (n == 0)
		lastbit = 0;
	else
		lastbit = 1;
	numbern += number;
	for (; i - 1 != index; i--)
	{
		for (receiv = 1, k = 0; numbern + receiv <= n && k < i; k++)
		{
			number = receiv;
			receiv *= 2;
		}
		if (k != i - 1 && numbern != n)
			lastbit = 0;
		else
		{
			lastbit = 1;
			numbern += number;
		}
	}
	return (lastbit);
}
