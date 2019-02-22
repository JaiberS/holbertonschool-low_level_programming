#include "holberton.h"
#include <stdio.h>
/**
 * print_buffer -  prints size buffer
 * @size: size of the buffer
 *@b: buffer to print
 *
*/

void print_buffer(char *b, int size)
{
	int i = 0, j = 0, k = 0, r = 0;

	while (i < size && k < size)
	{
		printf("%08x: ", k);
		for (j = 0; j < 10; j++, r++)
		{
			if (r < size)
				printf("%02x", b[r]);
			else
				printf("  ");
			if (j % 2 != 0)
				printf(" ");
				}
		for (j = 0; j < 10 && k < size; j++, k++)
		{
			if (b[k] >= 32 && b[k] <= 126)
				printf("%c", b[k]);
			else
				printf(".");

		}
		printf("\n");
		i++;
	}
}
