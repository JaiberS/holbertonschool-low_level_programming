#include <stdio.h>
/**
 * main - prints  the largest prime factor of the number 612852475143
 *
 *Return: Always 0
*/

int main(void)
{
	long j = 1231952, i = 2, a = 2, m0 = 0, b = 1, j2 = j;

	while (b <  j2)
	{
		m0 = 0;
		for (i = 2; i < a; i++)
		{
			if (a % i == 0)
			{
				m0 = 1;
			}
		}
		if (m0 == 0)
		{
			while (j % a == 0)
			{
				j = j / a;
				b =  b * a;
			}
		}
		a++;
	}
	a = a - 1;
	printf("%lu\n", a);
	return (0);
}
