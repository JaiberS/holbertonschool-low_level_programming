#include "holberton.h"

/**
 * create_array -  creates an array of chars
 *@size: size of the array
 *@c: character to be on the arrayxs
 *
 * Return: NULL if size 0 or fails, SUCCED: Pointer to chars
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i = 0;

	if (size == 0)
		return (0);
	p = malloc(sizeof(char) * size);
	for (; i < size; i++)
		p[i] = c;
	return (p);
}
