#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * @array: Array of integer elements
 * @size: size of the array
 * @cmp: functions to compare
 *
 * Return:  the index of the first element for which the cmp.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0, j = 0;

	for (; i < size && size > 0; i++)
	{
		j = cmp(array[i]);
		if (j != 0)
			break;
	}
	return (i);
}
