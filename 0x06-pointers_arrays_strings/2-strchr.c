#include "holberton.h"
#include <stdio.h>

/**
 * _strchr -  locates a character in a string.
 * @s: string.
 * @c: characgter to be located.
 *
 *Return: pointer to the first occurrence of the character c in the string s,
 *or NULL if the character is not found.
*/

char *_strchr(char *s, char c)
{
	unsigned int m0 = 0;

	for (; m0 == 0; s++)
	{
		if (*s == c)
			break;
		if (*s == '\0')
		{
			m0 = 1;
			break;
		}
	}
	if (m0 == 0)
		return (s);
	return (0);
}
