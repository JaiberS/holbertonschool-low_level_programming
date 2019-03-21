#include "lists.h"



/**
 * print_list - prints all the elements of a list_t list.
 * @h: the list
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	if (h == NULL)
		return (0);
	for (; h != NULL; h = h->next)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
			printf("[%i] %s\n", h->len, h->str);
		i++;
	}
	return (i);
}
