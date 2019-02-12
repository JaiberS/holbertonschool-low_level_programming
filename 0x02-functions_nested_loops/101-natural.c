#include <stdio.h>
/**
 * main - prind alphabet
 * Return: always returns 0
*/

int main(void)
{
	int n = 1, j = 0;

	for (; n < 1024; n++)
	{
		if (n % 3 == 0 || n % 5 == 0)
		{
			j = j + n;
		}
	}
	printf("%i\n", j);
	return (0);
}
