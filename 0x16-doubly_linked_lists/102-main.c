#include <stdio.h>


int main(void)
{
	unsigned int i = 999, j = 999, k = 0, aux = 0, aux2 = 0, aux3 = 0, max = 0, i2 = 0, j2 = 0;

	for (; i > 0; i--)
	{
		if (i < 100)
			break;
		for (j = 999; j > 0; j--)
		{
			if (j < 100)
				break;
			k = i * j;
			aux = k;
			aux3 = 0;
			while (aux > 0)
			{
				aux2 = aux % 10;
				aux3 = (aux3 * 10) + aux2;
				aux /= 10;
			}
			if (k != aux3)
				continue;
			if (k > max)
			{
				max = k;
				i2 = i;
				j2 = j;
			}
		}
	}
	printf("%i = %i * %i\n", max, i2, j2);
	return(0);
}
