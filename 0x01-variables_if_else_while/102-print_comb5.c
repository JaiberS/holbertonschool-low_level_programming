#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints alphabet
 * Return: always returns 0
*/

int main(void)
{
	int alphabet = 0, number = 0, total = 0, fnd = 0, snd = 0;

	while (fnd < 10)
	{
		while (snd < 10)
		{
			while (alphabet < 10)
			{
				while (number < 10)
				{
					if (snd < number)
					{
						putchar(fnd + '0');
						putchar(snd + '0');
						putchar(' ');
						putchar(alphabet + '0');
						putchar(number + '0');
					if (total < 4499)
					{
						putchar(',');
						putchar(' ');
					}
					total++;
					}
					number++;
				}
				alphabet++;
				number = 0;
			}
			snd++;
			alphabet = 0;
			number = 0;
		}
		fnd++;
		snd = 0;
		alphabet = 0;
		number = 0;
	}
		 putchar('\n');
	return (0);
}
