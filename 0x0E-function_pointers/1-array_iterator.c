#include "function_pointers.h"

/**
 * array_iterator - executes a function as a parameter on each Array element.
 * @array: a
 * @size: s
 * @action: ac
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	for (; i < size && size > 0 && action; i++)
	{
		action(array[i]);
	}
}
