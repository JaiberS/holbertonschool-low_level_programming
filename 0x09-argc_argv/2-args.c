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
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
