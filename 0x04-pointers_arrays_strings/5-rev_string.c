#include "holberton.h"

/**
 * rev_string -  the string array in reverse
 * @s: array to rev
 *
 */

void rev_string(char *s)
{
	int i = 0, r = 0;
	char j[99];

	while (s[i] != 0)
	{
		j[i] = s[i];
		i++;
	}
	i--;
	for (; i >= 0; i--)
	{
		s[i] = j[r];
		r++;
	}
}
