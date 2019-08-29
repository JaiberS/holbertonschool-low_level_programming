#include "search_algos.h"
#include <math.h>

/**
 * jump_list - search using Linear Search
 * @list: pointer to the first element of the at index  to search in
 * @size: number of elements in at index 
 * @value: value to search for
 *
 * Return: the index or NULL
 */


listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t i = 0, step0 = sqrt(size), step1 = 0;
	listint_t *list2 = list;

	if (list == NULL)
		return (NULL);
	for (step1 = step0; step0 < size; step0 += step1)
	{
		for (; list2->index != step0; list2 = list2->next)
			;
		i = list->index;
		printf("Value checked at index [%lu] = [%i]\n", step0, list2->n);
		if (value <= list2->n && value >= list->n)
		{
			printf("Value found between indexes [%lu] and [%lu]\n", i, step0);
			break;
		}
		for (i += step1; list->index != i; list = list->next)
			;
	}
	for (; i < size && step0 < size; i++, list = list->next)
	{
		printf("Value checked at index [%lu] = [%i]\n", i, list->n);
		if (list->n == value)
			return (list);
	}
	list2 = list;
	for (; list2->next != NULL; list2 = list2->next)
		;
	printf("Value checked at index [%lu] = [%i]\n", size - 1, list2->n);
	printf("Value found between indexes [%lu] and [%lu]\n", i, size - 1);
	for (; i < size; i++, list = list->next)
	{
		printf("Value checked at index [%lu] = [%i]\n", i, list->n);
		if (list->n == value)
			return (list);
	}
	return (NULL);
}
