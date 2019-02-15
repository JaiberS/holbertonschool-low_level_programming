#include <stdio.h>
/**
 * main - prints  the largest prime factor of the number 612852475143
 *
 *Return: Always 0
*/

int main(void)
{
	long j = 612852475143, a = 2, m0 = 0, b = 1;

	while (j != 1)
	{
		m0 = 0;
		if (a % 3 == 0 || a % 2 == 0 || a % 5 == 0 || a % 7 == 0)
			m0 = 1;
		if (a == 2 || a == 3 || a == 5 || a == 7)
			m0 = 0;
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
