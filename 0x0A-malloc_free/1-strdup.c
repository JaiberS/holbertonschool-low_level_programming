#include "holberton.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 *@str: string to be copied
 *
 * Return: pointer to a new string, NULL if str = NULL
 */
char *_strdup(char *str)
{
	int i = 0, j = 0;
	char *p;

	if (str == NULL)
		return (0);
	for (; str[i] != '\0'; i++)
		;
	i++;
/*	printf("%i",i);*/
	p = malloc(sizeof(char) * i);
	if (p == NULL)
		return (p);
	for (; j < i; j++)
		p[j] = str[j];
	return (p);
}
