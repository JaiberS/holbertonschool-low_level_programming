#include <stdio.h>
/**
 * main - prind alphabet
 * Return: always returns 0
*/

int main(void)
{
	float n = 1, j = n, s = 1, r = 0;
	while (r < 97)
	{
		if (r != 96)
		{
		printf("%.0f, ", s);
		}
		else
		{
			printf("%.0f", s);
		}
		s = n + j;
		n = j;
		j = s;
		r++;
	}
	printf("\n");
	return(0);
}
