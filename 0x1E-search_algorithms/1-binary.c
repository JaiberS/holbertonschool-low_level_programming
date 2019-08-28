#include "search_algos.h"

/**
 * binary_search - search using Binary Search
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: the index or -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i = 0, k = 0, s = size - 1;

	if (array == NULL)
                return (-1);
	do {
		printf("Searching in array: ");
		for (i = k; i < s; i++)
			printf("%i, ", array[i]);
		printf("%i\n", array[i]);
		i = size / 2;
		if (size % 2 == 0)
			i = i - 1;
		if (array[i + k] == value)
			break;
		if (array[i + k] < value)
			k = i + k + 1;
		else
			s = i - 1;
		size = s - k + 1;
	} while (size != 1);
	if (array[i + k] != value)
	{
		printf("Searching in array: %i\n", array[i + k]);
		return (-1);
	}
	return (i + k);
}
