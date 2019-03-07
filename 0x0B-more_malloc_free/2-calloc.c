#include "holberton.h"

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of memory to be allocated
 * @size: size of the type to be allocated
 *
 * Return: returns a pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *p;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(size * nmemb);
	if (p == NULL)
		return (NULL);
	for (; i < size; i++)
		p[i] = 0;
	return((void *)p);
}
