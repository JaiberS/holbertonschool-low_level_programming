#include "lists.h"

/**
 * insert_nodeint_at_index - adds a new node at index of a listint_t list.
 * @n: new data
 * @head: first node
 * @idx: index for the node to be added
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *head2, *ant;
	unsigned int i = 0;

	if (head == NULL)
		return (0);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	if (*head == NULL)
	{
		new->n = n;
		new->next = NULL;
		*head = new;
		return (new);
	}
	head2 = *head;
	for (; i < idx && head2 != NULL; ant = head2,
		     head2 = head2->next, i++)
		;
	if (head2 != NULL || i == idx)
	{
		new->n = n;
		if (idx != 0)
		{
			ant->next = new;
			new->next = head2;
		}
		else
		{
			new->next = *head;
			*head = new;
		}
		return (new);
	}
	free(new);
	return (NULL);
}
