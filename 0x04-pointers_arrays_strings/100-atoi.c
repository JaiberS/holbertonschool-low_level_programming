#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _atoi - string to integer
 * @s: the number in string
 *
 * Return: the number in integer
 */

int _atoi(char *s)
{
	int i = 0, m0 = 1, m1 = 0, j = 0, r = 0;

	while (s[i] != 0)
	{
		if (m0 == 1)
		{
			if (s[i] == '-')
				j++;
			if (s[i] >= '0' && s[i] <= '9')
			{
				m0 = 0;
				m1 = 1;
			}
		}
		if (m1 == 1)
		{
			if (s[i] >= '0' && s[i] <= '9')
				r = (r * 10) + (s[i] - 48);
			if (s[i] == '-')
				j++;
			if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
				m1 = 0;
		}
		i++;
	}
	if (j % 2 != 0)
		r = r * -1;
	if ((r - s[i - 1]) == -2147483648)
		r = -2147483648;
	return (r);
}
