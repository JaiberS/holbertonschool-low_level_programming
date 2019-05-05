#include "lists.h"

/**
 * insert_dnodeint_at_index - adds a new node at index of a listint_t list.
 * @n: new data
 * @h: first node
 * @idx: index for the node to be added
 *
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *head2, *ant;
	unsigned int i = 0;

	if (h == NULL)
		return (0);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{		free(new);
		return (NULL);	}
	if (*h == NULL)
	{		new->n = n;
		new->next = NULL;
		new->prev = NULL;
		*h = new;
		return (new);	}
	head2 = *h;
	for (; i < idx && head2 != NULL; ant = head2,
		     head2 = head2->next, i++)
		;
	if (head2 != NULL || i == idx)
	{
		new->n = n;
		if (idx != 0)
		{			ant->next = new;
			new->next = head2;
			new->prev = ant;
			if (head2 != NULL)
				head2->prev = new;
		}
		else
		{			new->next = *h;
			new->prev = NULL;
			if (*h != NULL)
				(*h)->prev = new;
			*h = new;
		}
		return (new);
	}
	free(new);
	return (NULL);
}
