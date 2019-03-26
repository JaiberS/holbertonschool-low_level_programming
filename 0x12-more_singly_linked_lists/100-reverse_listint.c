#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: the list
 *
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *sgt;
	listint_t *ant;

	if (*head == NULL)
		return (NULL);
	sgt = (*head)->next;
	(*head)->next = NULL;
	for (; sgt != NULL; )
	{
		ant = sgt;
		sgt = ant->next;
		ant->next = *head;
		*head = ant;
	}
	return (*head);
}
