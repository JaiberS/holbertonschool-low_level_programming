#include "lists.h"

/**
 * free_listint_safe - frees a listint_t linked list.
 * @head: the list
 *
 * Return:  the size of the list that was freed
 */

size_t free_listint_safe(listint_t **h)
{
	size_t nodes = 0;
	listint_t *slow, *fast, *head2;

	slow = *h;
	fast = *h;
	head2 = *h;
	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast && fast == head2)
		{
			do {
				free(slow);
				nodes++;
				slow = slow->next;
			} while (slow != fast);
			*h = NULL;
			return (nodes);
		}
		if (slow == fast && fast != head2)
		{
			free(head2);
			head2 = head2->next;
			slow = head2;
			fast = head2;
			nodes++;
		}
	}
	slow = *h;
	for (; slow != NULL; slow = slow->next, nodes++)
		free(slow);
	*h = NULL;
	return (nodes);
}
