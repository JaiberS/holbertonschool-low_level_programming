#include "holberton.h"
#include <stdio.h>

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s:  initial segment
 * @accept: bytes
 *
 *Return: string of the bytes.
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int j = 0, m0 = 0;

	for (; s[0]; s++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[0] == accept[j])
			{
				m0 = 1;
				break;
			}
		}
		if (m0 == 1)
			return (s);
	}
	return (0);
}
