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
	unsigned int i = 0, m0 = 0;
	char **s2 = &s;

	for (; s[i]; i++)
	{
		if (s[i] == c)
		{
			*s2 = (s + i);
			break;
		}
		if (s[i + 1] == '\0')
		{
			m0 = 1;
			break;
		}
	}
	if (m0 == 0)
		return (*s2);
	return (0);
}
