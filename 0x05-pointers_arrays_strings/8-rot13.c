#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * rot13 - encondes in rot13 format
 *@jaiber: the string to change.
 *
 * Return: the string changed.
 */

char *rot13(char *jaiber)
{
	int i = 0, j = 0;
	char santi[] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"};
	char rami[] =  {"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm"};

	for (; jaiber[i] != '\0' ; i++)
	{
		j = 0;
		for (; santi[j] != '\0'; j++)
		{
			if (jaiber[i] == santi[j])
			{
				jaiber[i] = rami[j];
				break;
			}
		}
	}

	return (jaiber);
}
