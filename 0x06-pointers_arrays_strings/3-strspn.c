#include "holberton.h"
#include <stdio.h>

/**
 * _strspn -  gets the length of a prefix substring
 * @s:  initial segment
 * @accept: bytes
 *
 *Return: length of a prefix substring.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j = 0, m0 = 0, k = 0;

	for (; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				k++;
				break;
			}
			if (accept[j + 1] == '\0')
				m0 = 1;
		}
		if (m0 == 1)
			return (k);
	}
	return (k);
}
