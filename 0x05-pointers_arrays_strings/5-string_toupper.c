#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_toupper - changes lowercase to uppercase
 *@jaiber: the string to change.
 *
 * Return: the string changed.
 */

char *string_toupper(char *jaiber)
{
	int i = 0;

	for (; jaiber[i] != '\0' ; i++)
	{
		if (jaiber[i] >= 97 && jaiber[i] <= 122)
			jaiber[i] = jaiber[i] - 32;
	}

	return (jaiber);
}
