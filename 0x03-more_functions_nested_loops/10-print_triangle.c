#include "holberton.h"
/**
 * print_triangle - prints a triangle of # of size size
 *@size: size of the triangle
 *
*/

void print_triangle(int size)
{
	int i, j, s, r = 1, o = size;

	for (i = 1; i <= size; i++)
	{
		for (j = r; j < size; j++)
			_putchar(' ');
		for (s = o; s <= size; s++)
			_putchar('#');
		r++;
		o--;
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
