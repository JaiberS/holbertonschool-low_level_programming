#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints alphabet
 * Return: always returns 0
*/

int main(void)
{
	int alphabet = 0;
	int number = 0;
	int rddigit = 0;
	int total = 0;

	while (alphabet < 10)
	{
		while (number < 10)
		{
			while (rddigit < 10)
			{
				if (number < rddigit && alphabet < number)
				{
					putchar(alphabet + '0');
					putchar(number + '0');
					putchar(rddigit + '0');
					if (total < 789)
					{
						putchar(',');
						putchar(' ');
					}
				}
				total++;
				rddigit++;
			}
			number++;
			rddigit = 0;
		}
		alphabet++;
		number = 0;
		rddigit = 0;
	}
		 putchar('\n');
	return (0);
}
