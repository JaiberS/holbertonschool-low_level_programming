#include <stdio.h>

/**
 * main - test argv
 * @argc: counter of the inputs
 * @argv: the inputs in string
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i, j;

	i = argc;
	j = i;
	i = j;
	printf("%s\n", argv[0]);
	return (0);
}
