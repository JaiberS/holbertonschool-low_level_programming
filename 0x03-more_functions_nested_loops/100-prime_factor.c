#include <stdio.h>
/**
 * main - prints  the largest prime factor of the number 612852475143
*/

int main(void)
{
	unsigned long j = 612852475143, i = 2, a = 2, m0 = 0, b = 1;

	while (b < 612852475143)
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
				printf("%lu\n",j);
				j = j / a;
				b =  b * a;
				printf("%lu\n",a);
			}
		}
		a++;
	}
	return (0);
}
