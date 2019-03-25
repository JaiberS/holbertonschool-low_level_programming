#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of a listint_t
 * @head: the list.
 * @index: index to look for
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *head2;
	listint_t *anterior;
	unsigned int i = 0;

	head2 = *head;
	if (head2 == NULL)
		return (-1);
	for (; i < index
		     || head2 == NULL; i++,
		     anterior = head2, head2 = head2->next)
		;
	if (head2 != NULL)
	{
			free(head2);
			head2 = head2->next;
			if (i != 0)
				anterior->next = head2;
			else
				*head = head2;
			return (1);
	}
	return (-1);
}
