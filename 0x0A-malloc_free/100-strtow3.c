#include "holberton.h"

/**
 *
 *
 *
 *
 */

int countwords (char *str)
{
	int i = 0, m0 = 1, m1  = 0, k = 0;

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
	return (k);
}

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
	int i = 0, m1 = 0, k = 0, j = 0;

	if (str == NULL || str == '\0')
		return (0);
	k = countwords(str);
	p = malloc(sizeof(char *) * 3);
        if (p == NULL)
                return (0);
	for (i = 0, k = 0, j = 0; str[i] != '\0'; i++)
        {
                if (str[i] != ' ')
                {
                        m1 = 1;
			k++;
                }
                if (str[i] == ' ' && m1 == 1)
                {
			p[j] = malloc(sizeof(char) * (k + 1));
			if (p == NULL)
			{
				return (0);
			}
                        m1 = 0;
			j++;
			k = 0;
                }
        }
	for (i = 0, k = 0, j = 0, m1 = 0; str[i] != '\0'; i++)
        {
                if (str[i] != ' ')
                {
                        m1 = 1;
                        p[j][k] = str[i];
                        k++;
                }
                if (str[i] == ' ' && m1 == 1)
                {
			m1 = 0;
                        p[j][k] = '\0';
                        j++;
                        k = 0;
                }
        }
	p[j] = NULL;
	return(p);
}
