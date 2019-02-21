#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strcat -  function that concatenates two strings.
 *@dest: string to add the src string.
 *@src: string to be added to the dest string.
 *
 * Return: pointer to the resulting string dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, k = 0;
	char j[999];

	for (; dest[i] != '\0'; i++)
		;
	for (; src[k] != '\0'; k++)
	{
		if (k < n)
		{
			j[k] = src[k];
			dest[k] = j[k];
		}
		i++;
	}
	for (; k < n; k++)
		dest[k] = '\0';
	return (dest);
}
