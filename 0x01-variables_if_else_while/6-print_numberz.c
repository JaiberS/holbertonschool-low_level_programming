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

	while (alphabet < 10)
	{
		putchar(alphabet + '0');
		alphabet++;
	}
		 putchar('\n');
	return (0);
}
