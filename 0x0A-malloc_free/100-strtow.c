#include "holberton.h"

/**
 * strtow - splits a string into words.
 * @str: The string.
 *
 *
 * Return: pointer to an array of strings (words)
 */
char **strtow(char *str)
{
	char *p, **p2 = &p;
	int i = 0, m0 = 1, m1 = 0, k = 0;

	if (str == NULL || str == '\0')
		return (0);
	for (; str[i] != '\0'; i++)
	{
		printf("str: %c - p: %c", str[i], p[k]);
		if (str[i] != ' ' && m0 == 1)
		{
			m1 = 1;
			m0 = 0;
		}
		if (str[i] == ' ' && m1 == 1)
		{
			m1 = 0;
			m0 = 1;
			p[k] = '\0';
			k++;
		}
		if (m1)
		{
			p[k] = str [i];
			k++;
		}
	}
	printf("str: %c - p: %c", str[0], p[k]);
	return(p2);
}
