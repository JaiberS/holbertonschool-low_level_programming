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

char *_strcat(char *dest, char *src)
{
	int i = 0, k = 0;
	char j[999];

	for (; dest[i] != '\0'; i++)
		;
	for (; src[k] != '\0'; k++)
	{
		j[k] = dest[k];
		j[i] = src[k];
		dest[i] = j[i];
		i++;
	}
	return (dest);
}
