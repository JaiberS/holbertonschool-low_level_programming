#include "holberton.h"

/**
 * _memset -  fills memory with a constant byte
 * @s: memory to be filled
 * @b: constant byte
 * @n: until n
 *
 *Return: Returns a pointer to the memory area s
 */

void print_chessboard(char (*a)[8])
{
	int i;

	for (; i < 8; i++)
	{
		_putchar(**(a + i));
	}
}
