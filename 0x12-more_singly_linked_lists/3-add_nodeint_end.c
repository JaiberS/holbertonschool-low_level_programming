#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @n: new data
 * @head: first node
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *head2;

	new = malloc(sizeof(listint_t));
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
		head2->next = new;
	}
	else
		*head = new;
	return (*head);
}
