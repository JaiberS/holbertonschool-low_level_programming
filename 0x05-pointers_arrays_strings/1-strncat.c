#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strncat -  function that concatenates two strings until n.
 *@dest: string to add the src string.
 *@src: string to be added to the dest string.
 *@n: Limit of the string to be printed
 *
 * Return: pointer to the resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, k = 0;
	char j[999];

	for (; dest[i] != '\0'; i++)
		;
	for (; src[k] != '\0'; k++)
	{
		j[k] = dest[k];
		if (k < n)
			j[i] = src[k];
		dest[i] = j[i];
		i++;
	}
	return (dest);
}
