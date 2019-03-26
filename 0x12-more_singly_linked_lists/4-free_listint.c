#include "lists.h"

/**
 * free_listint -  frees a listint_t list.
 * @head: the list
 *
 */
void free_listint(listint_t *head)
{
	for (; head != NULL; head = head->next)
		free(head);
}
