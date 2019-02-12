#include <math.h>
#include <stdio.h>
/**
 * main - prind alphabet
 * Return: always returns 0
*/

int main(void)
{
	int r = 0, m0 = 1;
	unsigned long s = 1, n = 1, j = n, a, b, c, d, e, f, g, h;

	while (r < 97)
	{
		if (r <= 90)
		{
			printf("%lu, ", s);
			s = n + j;
			n = j;
			j = s;
		}
		else
		{
			if (m0)
			{
				printf("%lu, ", s);
				a = s / 10000000000;
				b = s % 10000000000;
				m0 = 0;
				c = n / 10000000000;
				d = n % 10000000000;
			}
			f = (b + d);
			g = f % 10000000000;
			h = (f - g) / 10000000000;
			e = a + c + h;
			c = a;
			d = b;
			a = e;
			b = g;
			if (r != 96)
				printf("%lu%lu, ", e, g);
			else
				printf("%lu%lu", a, b);
		}
		r++;
	}
	printf("\n");
	return (0);
}
