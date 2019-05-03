#include "lists.h"

/**
 * print_dlistint - prints the list
 * @h: the list
 *
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	if (h->prev == NULL)
	{
		for (; h != NULL; i++, h = h->next)
			printf("%i\n", h->n);
	}
	else if (h->next == NULL)
	{
		for (; h != NULL; i++, h = h->prev)
			printf("%i\n", h->n);
	}
	return (i);
}
