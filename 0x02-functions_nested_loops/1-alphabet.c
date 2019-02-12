#include "holberton.h"
/**
 * print_alphabet - print alphabet
 *
*/

void  print_alphabet(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}
		 _putchar('\n');
}
