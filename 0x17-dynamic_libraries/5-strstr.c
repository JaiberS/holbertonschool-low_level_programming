#include "holberton.h"
#include <stdio.h>

/**
 * _strstr - locates a substring
 * @haystack: string to check the ocurrence
 * @needle:  first occurrence of the substring
 *
 *Return: first occurrence of the substring
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int k = 0;

	if (*needle == 0)
		return (haystack);
	for (; haystack[0]; haystack++)
	{
		if (*haystack == *needle)
		{
			for (k = 0; needle[k]; k++)
			{
				if (haystack[k] != needle[k])
				{
					break;
				}
				if (needle[k + 1] == '\0')
					return (haystack);
			}
		}
	}
	return (0);
}
