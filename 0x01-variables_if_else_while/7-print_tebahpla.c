#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prind alphabet
 * Return: always returns 0
*/

int main(void)
{
	char alphabet = 'z';

	while (alphabet >= 'a')
	{
		putchar(alphabet);
		alphabet--;
	}
		 putchar('\n');
	return (0);
}
