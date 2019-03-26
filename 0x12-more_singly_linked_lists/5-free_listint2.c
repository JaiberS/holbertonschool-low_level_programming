#include "lists.h"

/**
 * free_listint2 -  frees a listint_t list.
 * @head: the list
 *
 */
void free_listint2(listint_t **head)
{
	if (head == NULL)
		return;
	for (; *head != NULL; *head = (*head)->next)
		free(*head);
}
