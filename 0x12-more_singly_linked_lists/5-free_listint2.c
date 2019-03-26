#include "lists.h"

/**
 * free_listint2 -  frees a listint_t list.
 * @head: the list
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *head2;

	head2 = *head;
	if (head2 == NULL)
		return;
	for (; head2 != NULL; head2 = head2->next)
		free(head2);

	*head = NULL;
}
