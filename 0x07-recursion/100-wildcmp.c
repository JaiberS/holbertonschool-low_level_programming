#include "holberton.h"
#include <stdio.h>

/**
 * cpalin - checks if both strings are identical
 * @s1: string 1
 * @s2: string to be compared
 * @j: to move on s2
 * @i: to move on s1
 * @k: stores position of s2
 *
 * Return: 1 is identical 0 is not
 */

int cpalin(char *s1, char *s2, int j, int i, int k)
{
	int r = 0;

	if (s1[i] == s2[j] && s2[j] != '\0')
	{
		j++;
		i++;
		r = cpalin(s1, s2, j, i, k);
	}
	else if (s2[j] == '*')
	{
		j++;
		k = j;
		r = cpalin(s1, s2, j, i, k);
	}
	else if (s1[i] != '\0')
	{
		j = k;
		i++;
		r = cpalin(s1, s2, j, i, k);
	}
	else if (s2[j] == '\0' && s1[i] == '\0')
		return (1);
	else
		return (0);
	return (r);
}
/**
 * wildcmp - checks if both strings are identical
 * @s1: string 1
 * @s2: string to be compared
 *
 * Return: 1 is identical 0 is not
 */

int wildcmp(char *s1, char *s2)
{
	int r;

	r = cpalin(s1, s2, 0, 0, 0);
	return (r);
}
