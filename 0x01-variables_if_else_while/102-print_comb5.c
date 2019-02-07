#include <stdio.h>
/**
 * main - prints alphabet
 * Return: always returns 0
*/

int main(void)
{
	int alphabet = 0, number = 0, total = 0, fnd = 0, snd = 0, total3 = 0;
	int total2 = 0;

	while (fnd < 10)
	{
		while (snd < 10)
		{
			while (alphabet < 10)
			{
				while (number < 10)
				{
					if (total > total2)
					{
						putchar(fnd + '0');
						putchar(snd + '0');
						putchar(' ');
						putchar(alphabet + '0');
						putchar(number + '0');
					if (total3 < 4949)
					{
						putchar(',');
						putchar(' ');
					}
					total3++;
					}
					number++;
					total++;
				}
				alphabet++;
				number = 0;
			}
			snd++;
			alphabet = number = total = 0;
			total2++;
		}
		fnd++;
		snd = alphabet = number = 0;
	}
		 putchar('\n');
	return (0);
}
