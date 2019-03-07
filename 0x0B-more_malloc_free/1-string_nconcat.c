#include "holberton.h"

/**
 * string_nconcat - concatenates two strings.
 * @s1: First string
 * @s2: second string
 * @n: number of n characters
 *
 * Return: pointer or if function fails, it should return NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (; s1[i] != '\0'; i++)
		;
	for (; s2[j] != '\0'; j++)
		;
	if (n >= (j - 1))
		p = malloc(sizeof(char) * (i + 1 + j));
	else
		p = malloc(sizeof(char) * (i + 1 + n));
	if (p == NULL)
		return (0);
	j = 0;
	for (; s1[j] != '\0'; j++)
		p[j] = s1[j];
	i = 0;
	if (n >= (j - 1))
	{
		for (; s2[i] != '\0' ; i++, j++)
			p[j] = s2[i];
	}
	else
	{
		for (; i < n ; i++, j++)
			p[j] = s2[i];
	}
	p[j] = '\0';
	return (p);
}
