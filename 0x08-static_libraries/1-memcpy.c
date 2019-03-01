#include "holberton.h"

/**
 * _memcpy - copies memory area.
 * @dest: memory to be filled
 * @src: memory to be copied
 * @n: until n
 *
 *Return: Returns a pointer to the memory area dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
