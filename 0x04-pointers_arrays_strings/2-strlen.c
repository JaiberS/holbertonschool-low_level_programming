#include "holberton.h"

/**
 * _strlen - checks the lenght of the string value
 * @s: Value to be checked
 *
 * Return: lenght of the string value
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != 0)
	{
		i++;
	}
	return (i);
}
