#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a listint_t list.
 * @n: new data
 * @head: first node
 *
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *head2;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		free(new);
		return (0);
	}
	new->n = n;
	new->next = NULL;
	head2 = *head;
	if (head2 != NULL)
	{
		for (; head2->next != NULL; head2 = head2->next)
			;
		new->prev = head2;
		head2->next = new;
	}
	else
	{
		new->prev = NULL;
		*head = new;
	}
	return (*head);
}
