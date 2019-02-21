#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * cap_string - Capitalize all words
 *@jaiber: the string to change.
 *
 * Return: the string changed.
 */

char *cap_string(char *jaiber)
{
	int i = 0, j = 0;
	char santi[] = {" ,;.!?\"(){}\t\n"};

	for (; jaiber[i] != '\0' ; i++)
	{
		j = 0;
		for (; santi[j] != '\0'; j++)
		{
			if (jaiber[i] == santi[j] && jaiber[i + 1] >= 97 && jaiber[i + 1] <= 122)
			{
				jaiber[i + 1] = jaiber[i + 1] - 32;
				break;
			}
		}
	}

	return (jaiber);
}
