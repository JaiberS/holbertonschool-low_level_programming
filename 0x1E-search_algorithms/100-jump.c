#include "search_algos.h"
#include <math.h>

/**
 * jump_search - search using Linear Search
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: the index or -1
 */


int jump_search(int *array, size_t size, int value)
{
	size_t i = 0, step0 = sqrt(size), step1 = 0;

	if (array == NULL)
		return (-1);
	for (step1 = step0; step0 < size; step0 += step1)
	{
		printf("Value checked array[%lu] = [%i]\n", i, array[i]);
		if (value <= array[step0] && value >= array[i])
		{
			printf("Value found between indexes [%lu] and [%lu]\n", i, step0);
			break;
		}
		i += step1;
	}
	for (; i < size; i++)
	{
		printf("Value checked array[%lu] = [%i]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	i = size - 1;
	printf("Value found between indexes [%lu] and [%lu]\n", i, i + step1);
	printf("Value checked array[%lu] = [%i]\n", i, array[i]);
	return (-1);
}
