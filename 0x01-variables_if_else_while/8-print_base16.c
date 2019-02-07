#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints alphabet
 * Return: always returns 0
*/

int main(void)
{
	char alphabet = 'a';
	int number = 0;

	while (number < 10)
	{
		putchar(number + '0');
		number++;
	}
	while (alphabet <= 'f')
	{
		putchar(alphabet);
		alphabet++;
	}
		 putchar('\n');
	return (0);
}
