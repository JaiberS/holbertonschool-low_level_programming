#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: the list
 *
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nodes = 0;
	const listint_t *slow, *fast;

	slow = head;
	fast = head;
	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast && fast == head)
		{
			do {
				printf("[%p] %i\n", (void *)slow, slow->n);
				nodes++;
				slow = slow->next;
			} while (slow != fast);
			printf("-> [%p] %i\n", (void *)slow, slow->n);
			return (nodes);
		}
		if (slow == fast && fast != head)
		{
			printf("[%p] %i\n", (void *)head, head->n);
			head = head->next;
			slow = head;
			fast = head;
			nodes++;
		}
	}
	slow = head;
	for (; slow != NULL; slow = slow->next, nodes++)
		printf("[%p] %i\n", (void *)slow, slow->n);
	return (nodes);
}
