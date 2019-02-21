#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_toupper - changes lowercase to uppercase
 *@jaiber: the string to change.
 *
 * Return: the string changed.
 */

char *leet(char *jaiber)
{
	int i = 0, j = 0;
	char santiago[] = {"AaEeOoTtLl"}, ramirez[] = "4433007711";

	for (; jaiber[i] != '\0' ; i++)
	{
		j = 0;
		for (; ramirez[j] != '\0'; j++)
		{
			if (jaiber[i] == santiago[j])
				jaiber[i] = ramirez[j];
		}
	}

	return (jaiber);
}
