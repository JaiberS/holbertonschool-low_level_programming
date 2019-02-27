#include "holberton.h"
#include <stdio.h>

/**
 * cpalin - checks for palindrome
 * @s: the string
 * @j: the counter in reverse
 * @i: the counter
 *
 * Return: 1 is palindrome 0 is not
 */

int cpalin(char *s1, char *s2, int j, int i)
{
	int r = 0;

	if (s1[i] == s2[j])
	{
		j++;
		i++;
		if (s1[i] == '\0' && s2[j] == '\0')
			return (1);
		r = cpalin(s1, s2, j, i);
	}
	else
		return (0);
	return (r);
}
/**
 * is_palindrome - checks for palindrome
 * @s: the string
 *
 * Return: 1 is palindrome 0 is not
 */

int wildcmp(char *s1, char *s2)
{
	int i;

	i = cpalin(s1, s2, 0, 0);
	return (i);
}
