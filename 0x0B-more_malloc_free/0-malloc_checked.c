#include "holberton.h"

/**
 * malloc_checked - allocates memory using malloc.
 * @b: size of the memory required
 *
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
