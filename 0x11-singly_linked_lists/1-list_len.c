#include "lists.h"



/**
 * list_len -  returns the number of elements in a linked list_t list.
 * @h: the list
 *
 * Return: the number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	if (h == NULL)
		return (0);
	for (; h != NULL; h = h->next)
	{
		i++;
	}
	return (i);
}
