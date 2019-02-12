#include "holberton.h"
/**
 * print_alphabet_x10 - print alphabet 10 times
*/

void  print_alphabet_x10(void)
{
	char alphabet;
	int i;

	for (i = 0; i < 10 ; i++)
	{
		alphabet = 'a';
		while (alphabet <= 'z')
		{
			_putchar(alphabet);
			alphabet++;
		}
		_putchar('\n');
	}
}
