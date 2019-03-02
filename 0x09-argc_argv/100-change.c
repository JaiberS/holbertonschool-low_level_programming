#include <stdio.h>
#include <stdlib.h>

/**
 * main - calculates the required change
 *@argc: counter of the inputs
 *@argv: the inputs in string
 *
 *Return: the number of coins for the change
 */

int main(int argc, char *argv[])
{
	int i, j = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]);
	if (i >= 25 && i > 0)
	{
		j += i / 25;
		i = i % 25;
	}
	if (i >= 10 && i > 0)
	{
		j += i / 10;
		i = i % 10;
	}
	if (i >= 5 && i > 0)
	{
		j += i / 5;
		i = i % 5;
	}
	if (i >= 2 && i > 0)
	{
		j += i / 2;
		i = i % 2;
	}
	if (i >= 1 && i > 0)
	{
		j += i;
		i = i - 1;
	}
	printf("%i\n", j);
	return (0);
}
