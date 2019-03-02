#include <stdlib.h>
#include <stdio.h>

/**
 * main - multiplies two numbers
 * @argc: counter of the inputs
 * @argv: the inputs in string
 *
 * Return: 1 if there are no two numbers only else 0
 */

int main(int argc, char *argv[])
{
	if (argc == 3)
		printf("%i\n", atoi(argv[1]) * atoi(argv[2]));
	else
		printf("Error\n");
		return (1);
	return (0);
}
