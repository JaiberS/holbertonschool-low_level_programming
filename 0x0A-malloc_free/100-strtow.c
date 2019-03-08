#include "holberton.h"

/**
 * free_g - free the grid provided
 * @grid: grid to be freed
 * @height: rows of the grid
 *
 */
void free_g(char **grid, int height)
{
	int i = 0;

	for (; i < height; i++)
		free(grid[i]);
	free(grid);
}

/**
 * countwords - count the amount of words
 * @str: the strings to count the words
 *
 * Return: the number of words
 */

int countwords(char *str)
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
 * sizecolumns - add the size to the columns
 * @str: principal string
 * @p: string to be added the size
 *
 * Return: 0 if fails
 */

int sizecolumns(char *str, char **p)
{
	int i, k, j, m1 = 0;

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
			if (p[j] == NULL)
			{
				free_g(p, j);
				return (0);
			}
			m1 = 0;
			j++;
			k = 0;
		}
	}
	if (str[i - 1] != ' ')
	{
		p[j] = malloc(sizeof(char) * (k + 1));
		if (p[j] == NULL)
		{
			free_g(p, j);
			return (0);
		}
	}
	return (1);
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
	int i = 0, m1 = 0, k = 0, j = 0, checkr = 0;

	if (str == NULL || str[0] == '\0')
		return (0);
	if (str[1] == '\0' && str[0] == ' ')
		return (0);
	k = countwords(str);
	p = malloc(sizeof(char *) * (k + 1));
	if (p == NULL)
		return (0);
	checkr = sizecolumns(str, p);
	if (checkr == 0)
		return (0);
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
	if (str[i - 1] != ' ')
		j++;
	p[j] = NULL;
	return (p);
}
