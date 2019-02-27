#include "holberton.h"
#include <stdio.h>

/**
 * count_string - counts the lenght of the string
 * @s: the string
 * @i: the counter
 *
 * Return: the lenght of the string counted by i
 */

int count_string(char *s, int i)
{
	if (s[i] != '\0')
	{
		i++;
		i = count_string(s, i);
	}
	return (i);
}

/**
 * cpalin - checks for palindrome
 * @s: the string
 * @j: the counter in reverse
 * @i: the counter
 *
 * Return: 1 is palindrome 0 is not
 */

int cpalin(char *s, int j, int i)
{
	int r = 0;

	if (s[j] == s[i])
	{
		j--;
		i++;
		if (i > j)
			return (1);
		r = cpalin(s, j, i);
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

int is_palindrome(char *s)
{
	int j = count_string(s, 0), i = 0;

	if (s == 0)
		return (1);
	i = cpalin(s, j - 1, i);
	return (i);
}
