#include "holberton.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 *
 * Return: pointer to a new string, NULL if str = NULL
 */
char *_strdup(char *str)
{
	int i = 0, j = 0;
	char *p;

	for (; str[i] != '\0'; i++)
		;
	if (str == NULL)
		return (0);
	p = malloc(sizeof(char) * i);
	for (; j <= i; j++)
		p[j] = str[j];
	return (p);
}
