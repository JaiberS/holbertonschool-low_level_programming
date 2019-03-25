#include "lists.h"

/**
 * pop_listint -  deletes the head node of a listint_t linked list
 * @head: the list
 *
 * Return: head nodes data (n). 0 if empty
 */
int pop_listint(listint_t **head)
{
	listint_t *head2;
	int n = 0;

	head2 = *head;
	if (head2 != NULL)
	{
		free(head2);
		n = head2->n;
		head2 = head2->next;
		*head = head2;
		return (n);
	}
	return (n);
}
