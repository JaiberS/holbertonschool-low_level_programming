#include "holberton.h"
#include <stdio.h>

int count_string(char *s, int i)
{
	if (s[i] != '\0')
	{
		i++;
		i = count_string(s, i);
	}
	return (i);
}

void prints(char *s, int j)
{
	if (s[j] != '\n')
        {
                _putchar(s[j]);
                j--;
                prints(s, j);
        }
        else
                _putchar('\n');

}
/**
 * _puts_recursion - prints a string, followed by a new line.
 * @s: string to be printed
 *
 */

void _print_rev_recursion(char *s)
{
	int j = count_string (s, 0);

	prints(s, j);
}
