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

char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0, m0 = 0, k = 0;
	char **s2 = &haystack;

	for (;haystack[i]; i++)
	{
		while (haystack[i] == needle[k])
		{
			if (m0 == 0)
			{
				*s2 = (haystack + i);
				m0 = 1;
				i--;
			}
			if (needle[k] == '\0')
			{
				m0 = 2;
				break;
			}
			k++;
			i++;
		}
		if (m0 == 2)
			break;
		k = 0;
		m0 = 0;
	}
	if (m0 == 2)
	{
		return (*s2);
	}
	else
	{
		*s2 = (haystack + i);
		return (*s2);
	}
}
