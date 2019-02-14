#include "holberton.h"
/**
 * _ismul -  multiplies two integers
 *@a: a times b
 *@b: a times b
 *
 * Return: the result
*/

void print_most_numbers(void)
{
	int i;

	for(i = 0; i <=9; i++)
	{
		if(i!=2 && i!=4)
			_putchar(i + '0');
	}
	_putchar('\n');
}
