#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index index of a listint_t
 * @head: the list.
 * @index: index to look for
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *head2;
	dlistint_t *anterior;
	unsigned int i = 0;

	head2 = *head;
	if (head2 == NULL)
		return (-1);
	for (; i < index
		     && head2 != NULL; i++,
		     anterior = head2, head2 = head2->next)
		;
	if (head2 != NULL)
	{
		free(head2);
		head2 = head2->next;
		if (i != 0)
		{
			head2->prev = anterior;
			anterior->next = head2;
		}
		else
		{
			if ((*head)->prev != NULL)
				head2->prev = NULL;
			*head = head2;
		}
		return (1);
	}
	return (-1);
}
