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
	printf("%i", i+ 1 +j);
	printf("%i", i+ 1 +n);
	if (n >= (j - 1))
		p = malloc(sizeof(char) * (i + 1 + j));
	else
		p = malloc(sizeof(char) * (i + 1 + n));
	if (p == NULL)
		return (0);
	i = 0;
	for (; s1[i] != '\0'; i++)
		p[i] = s1[i];
	if (n >= (j - 1))
	{
		j = 0;
		for (; s2[j] != '\0' ; i++, j++)
			p[i] = s2[j];
	}
	else
	{
		j = 0;
		for (; j < n ; i++, j++)
			p[i] = s2[j];
	}
	p[i] = '\0';
	return (p);
}
