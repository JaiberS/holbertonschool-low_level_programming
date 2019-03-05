#include "holberton.h"

/**
 * str_concat -concatenates two strings.
 * @s1: First string
 * @s2: second string
 *
 * Return: NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *p = s1;
	int i = 0, j = 0;

	for (; s1[i] != '\0'; i++)
		;
	for (i = i - 1; s2[j] != '\0'; i++, j++)
		;
	p = malloc(sizeof(char) * i);
	if (p == NULL)
		return (0);
	j = 0;
	for (; s1[j] != '\0'; j++)
		p[j] = s1[j];
	i = 0;
	for (; s2[i] != '\0'; i++, j++)
		p[j] = s2[i];
	p[j] = s2[i];
	return (p);
}
