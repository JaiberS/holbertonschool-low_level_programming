#include <stdio.h>
#include <stdlib.h>

void print_diagonal(int n)
{
	int i = 0, k = 0;

	if (n <= 0)
	{
		putchar('\n');
		i = n + 1;
	}
	for (; i < n; i++)
	{
		for(k = 0; k < i; k++)
		{
			putchar(' ');
		}
		putchar('\\');
		putchar('\n');
	}
}
