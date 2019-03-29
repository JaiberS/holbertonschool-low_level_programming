#include "holberton.h"

/**
 * print_binary - converts a decimal number to a binary.
 * @n: number in decimal to conver
 *
 */
void print_binary(unsigned long int n)
{
	unsigned long int numbern = 0, number = 0, receiv = 1, i = 0, k = 0;

	if (n == ULONG_MAX)
	{
		for (; i < 64; i++)
			printf("1");
		return;
	}

	for (receiv = 1; numbern + receiv <= n ; i++)
	{
		number = receiv;
		receiv *= 2;
	}
	if (n == 0)
		printf("0");
	else
		printf("1");
	numbern += number;
	for (; numbern < n; i--)
	{
		for (receiv = 1, k = 0; numbern + receiv <= n && k < i; k++)
		{
			number = receiv;
			receiv *= 2;
		}
		if (k != i - 1 && numbern != n)
			printf("0");
		else
		{
			printf("1");
			numbern += number;
		}
	}
	if (numbern == n)
	{
		for (; i > 1; i--)
			printf("0");
	}
}
