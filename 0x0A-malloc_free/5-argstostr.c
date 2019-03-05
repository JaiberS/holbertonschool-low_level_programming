#include "holberton.h"

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: argc
 * @av: argv
 *
 * Return:  pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int i = 0, j = 0, k = 0;
	char *p;

	if (ac == 0 || av == NULL)
		return (0);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, k++)
			;
	}
	p = malloc(sizeof(char) * (k + 1));
	if (p == NULL)
		return (0);
	for (i = 0, k = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, k++)
			p[k] = av[i][j];
		p[k] = '\n';
/*		printf("%i",k);*/
		k++;
	}
	p[k] = '\0';
	return (p);
}
