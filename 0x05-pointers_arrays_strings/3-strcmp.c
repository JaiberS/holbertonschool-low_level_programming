#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strcmp -  compares two strings.
 *@s1: first string to compare
 *@s1: second string to compare
 *
 * Return: the comparation of the strings
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, j = 0;

	for (; (s1[i] != '\0' && s2[i] != '\0') && (s1[i] == s2[i]); i++)
	{
	}
	if (s1[i] != s2[i])
		j = s1[i] - s2[i];
	return (j);
}
