#include "holberton.h"
/**
 * main - prind alphabet
 * Return: always returns 0
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
