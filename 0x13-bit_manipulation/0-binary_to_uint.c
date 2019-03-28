#include "holberton.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: number in binary to conver
 *
 * Return: the converted number, or 0 if
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, j = 0, number = 0, k = 1, receiv = 1;

	if (b == NULL)
		return (0);
	for (; b[i] != '\0'; i++)
		;
	i--;
	for (; b[j] != '\0'; i--, j++)
	{
		if (b[j] != '0' && b[j] != '1')
			return (0);
		if( b[j] == '1')
		{
			receiv = 2;
			if (i == 0)
				receiv = 1;
			for (k = 1; k < i ; k++)
				receiv *= 2;
			number += receiv;
		}
	}
	return (number);
}
