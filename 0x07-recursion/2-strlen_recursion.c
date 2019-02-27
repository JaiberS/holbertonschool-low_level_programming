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
 * _strlen_recursion - counts the lenght of the string
 * @s: the string
 *
 * Return: the lenght of the string
 */

int _strlen_recursion(char *s)
{
	int j = count_string(s, 0);

	return (j);
}
