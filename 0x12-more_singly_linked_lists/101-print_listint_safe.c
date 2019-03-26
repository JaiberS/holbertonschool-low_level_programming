#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: the list
 *
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nodes;
	const listint_t *slow, *fast;

        slow = head;
        fast = head;
        while (slow && fast && fast->next)
        {
                printf("[%p] %i\n", (void *)slow, slow->n);
                slow = slow->next;
                fast = fast->next->next;
                if (slow == fast)
                {
                        printf("-> [%p] %i\n", (void *)slow, slow->n);
                        return (nodes);
                }
                nodes++;
        }
        return (nodes);
}
