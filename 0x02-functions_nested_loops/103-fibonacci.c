#include <stdio.h>
/**
 * main - prind alphabet
 * Return: always returns 0
*/

int main(void)
{
	long n = 1, j = n, s = 1, r = 0;

	while (s < 4000000)
	{
		s = n + j;
		n = j;
		j = s;
		if (s % 2 == 0)
		{
			r = r + s;
		}
	}
	printf("%li", r);
	printf("\n");
	return (0);
}
