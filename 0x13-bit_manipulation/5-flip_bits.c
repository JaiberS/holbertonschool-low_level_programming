#include "holberton.h"

/**
 * flip_bits - check number of bits you would need to flip
 * @n: first number
 * @m: second nuber
 *
 * Return: the number of bits you would need to flip to get from one to another
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int cmp1 = 1, cmp2 = 1, counter = 0;

	for (; n != 0 || m != 0;  n = n >> 1,  m = m >> 1)
	{
		cmp1 = n & 1;
		cmp2 = m & 1;
		if (cmp1 != cmp2)
			counter++;
	}
	return (counter);
}
