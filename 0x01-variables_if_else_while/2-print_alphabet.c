#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prind alphabet
 * Return: always returns 0
*/

int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
		 putchar('\n');
	return (0);
}
