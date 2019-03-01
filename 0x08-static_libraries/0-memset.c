#include "holberton.h"

/**
 * _memset -  fills memory with a constant byte
 * @s: memory to be filled
 * @b: constant byte
 * @n: until n
 *
 *Return: Returns a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
