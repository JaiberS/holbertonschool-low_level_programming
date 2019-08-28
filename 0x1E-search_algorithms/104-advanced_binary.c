#include "search_algos.h"

/**
 * advanced_binary - search using Binary Search
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: the index or -1
 */

int advanced_binary(int *array, size_t size, int value)
{
	size_t k = 0, s = size - 1;

	if (array == NULL)
		return (-1);
	return (recursion_search(array, size, value, k, s));
}

/**
 * recursion_search - search using Binary Search
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * @k : left limit
 * @s : rigth limit
 *
 * Return: the index or -1
 */

int recursion_search(int *array, size_t size, int value, size_t k, size_t s)
{
	size_t i = 0;

	printf("Searching in array: ");
	for (i = k; i < s; i++)
		printf("%i, ", array[i]);
	printf("%i\n", array[i]);
	i = size / 2;
	if (size % 2 == 0)
		i = i - 1;
	if (array[i + k] == value)
		s = i + k;
	else if (array[i + k] < value)
		k = i + k + 1;
	else
		s = i - 1;
	size = s - k + 1;
	if (size == 1)
	{
		if (array[i + k] != value)
		{
			printf("Searching in array: %i\n", array[i + k]);
			return (-1);
		}
		return (i + k);
	}
	return (recursion_search(array, size, value, k, s));
}
