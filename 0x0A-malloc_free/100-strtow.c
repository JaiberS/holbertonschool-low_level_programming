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
	char **p;
	int i = 0, m0 = 1, m1 = 0, k = 0;

	if (str == NULL || str == '\0')
		return (0);

	for (; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && m0 == 1)
		{
			m1 = 1;
			m0 = 0;
			k++;
		}
		if (str[i] == ' ' && m1 == 1)
		{
			m1 = 0;
			m0 = 1;
		}
	}
	p = malloc(sizeof(char *) * k);
        if (p == NULL)
                return (0);
        if (width <= 0 || height <= 0)
                return (0);
        for (; i < height; i++)
                p[i] = malloc(sizeof(int) * width);
        if (p == NULL)
        {
                free_grid(p, height);
                return (0);
        }
        return (p);

	printf("str: %c - p: %c", str[0], p[k]);
	return(p2);
}
