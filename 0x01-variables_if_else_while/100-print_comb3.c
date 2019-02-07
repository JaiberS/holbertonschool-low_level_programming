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
			if (alphabet < number)
			{
				putchar(alphabet + '0');
				putchar(number + '0');
				if (total < 89)
				{
					putchar(',');
					putchar(' ');
				}
			}
			total++;
			number++;
		}
		alphabet++;
		number = 0;
	}
		 putchar('\n');
	return (0);
}
