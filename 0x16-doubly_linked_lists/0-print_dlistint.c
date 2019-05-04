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

	for (; h != NULL; i++, h = h->next)
		printf("%i\n", h->n);
	return (i);
}
