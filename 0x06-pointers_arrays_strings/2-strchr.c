#include "holberton.h"
#include <stdio.h>

/**
 * _memset -  fills memory with a constant byte
 * @s: memory to be filled
 * @b: constant byte
 * @n: until n
 *
 *Return: Returns a pointer to the memory area s
 */

char *_strchr(char *s, char c)
{
	unsigned int i = 0, m0 = 0;
	char **s2 = &s;

	for (;s[i]; i++)
	{
		if (s[i] == c)
		{
			*s2 = (s + i);
			break;
		}
		if (s[i + 1]== '\0')
		{
			m0 = 1;
			break;
		}
	}
	if (m0 == 0)
		return (*s2);
	else
	{
		*s2 = (s + i);
		return (*s2);
	}
}
