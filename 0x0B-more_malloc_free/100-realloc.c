#include "holberton.h"

/**
 * _realloc -  reallocates a memory block
 * @ptr: is a pointer to the memory previously allocated
 * @old_size: is the size, in bytes, of the allocated space for ptr
 * @new_size: is the new size, in bytes of the new memory block
 *
 * Return: pointer to the new allocation with the values from prev
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p = ptr;
/*	int i = 0;*/

	if (ptr == NULL)
		return(malloc(new_size));
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	p = malloc(new_size);
	if (p == NULL)
	{
		free(p);
		free(ptr);
		return (NULL);
	}
/*
 * for (; ptr[i] != '\0'; i++)
 *	p[i] = ptr[i];
 */
	return (p);
}
