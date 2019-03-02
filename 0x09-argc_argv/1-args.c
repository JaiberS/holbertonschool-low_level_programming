#include <stdio.h>

/**
 * main - test argc
 * @argc: counter of the inputs
 * @argv: the inputs in string
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	char *i, *j;

	i = argv[0];
	j = i;
	i = j;
	printf("%i\n", argc - 1);
	return (0);
}
