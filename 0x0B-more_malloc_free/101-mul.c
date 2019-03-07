#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds numbers
 *@argc: counter of the inputs
 *@argv: the inputs in string
 *
 *Return: the add of th enumbers or Error if there is a string
 */

int main(int argc, char *argv[])
{
	int i;
	unsigned sum = 1;
	char *j;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (i = 1; i < argc; i++)
	{
		strtol(argv[i], &j, 10);
		if (j[0] == '\0')
			sum = sum * atoi(argv[i]);
		else
		{
			printf("Error\n");
			exit(98);
		}
	}
	printf("%i\n", sum);
	return (0);
}
