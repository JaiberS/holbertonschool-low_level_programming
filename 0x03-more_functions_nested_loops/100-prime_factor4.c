#include <stdio.h>
/**
 * main - prints  the largest prime factor of the number 612852475143
 *
 *Return: Always 0
*/

int main(void)
{
	long j = 612852475143, i = 2, a = 2, m0 = 0, m1 = 0 ;

	for (a = j/2 ; m1 == 0 ; a-- )
	{
		printf("\n%lu\n",a);
		if( j % a == 0)
		{
			m0 = 0;
			for (i = 2; i < a; i++)
			{
				if (a % i == 0)
					m0 = 1;
			}
			if (m0 == 0)
			{
				m1 = 1;
			}
		}
	}
	a = a + 1;
	printf("%lu\n",a);
	return (0);
}
