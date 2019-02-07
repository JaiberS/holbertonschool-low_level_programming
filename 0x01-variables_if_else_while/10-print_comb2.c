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
	int total = 0;

	while (alphabet < 10)
	{
		while (number < 10)
		{
			putchar(alphabet + '0');
			putchar(number + '0');
			number++;
			if (total < 99)
			{
				putchar(',');
				putchar(' ');
			}
			total++;
		}
		alphabet++;
		number = 0;
	}
		 putchar('\n');
	return (0);
}
