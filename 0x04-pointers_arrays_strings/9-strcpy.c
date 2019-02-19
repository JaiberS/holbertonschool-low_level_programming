#include "holberton.h"
#include <stdio.h>

/**
 * print_array - prints n elements of string array
 * @a: string to print
 * @n: n elements
 *
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i + 1] = src [i + 1];
	return (src);
}
