#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: the list
 * @index:  index of the node, starting at 0
 *
 * Return: The nth node of a listint_t linked list. NULL if not exists
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	for (; i < index && head != NULL; i++, head = head->next)
		;
	if (head != NULL)
		return (head);
	return (NULL);
}
