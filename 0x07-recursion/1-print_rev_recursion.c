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
 * prints - prints the string
 * @s: the string
 * @j: the counter in reverse
 *
 */

void prints(char *s, int j)
{
	if (s[j] != s[0])
	{
		_putchar(s[j]);
		j--;
		prints(s, j);
	}
	else
		_putchar(s[0]);
}
/**
 * _print_rev_recursion - prints a string in reverse, followed by a new line.
 * @s: string to be printed
 *
 */

void _print_rev_recursion(char *s)
{
	int j = count_string(s, 0);

	prints(s, j - 1);
}
