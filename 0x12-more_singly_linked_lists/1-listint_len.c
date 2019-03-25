#include "lists.h"

/**
 * listint_len - counts nodes
 * @h: the list
 *
 * Return:  the number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	for (; h != NULL; h = h->next, i++)
		;
	return (i);
}
