#include "lists.h"

/**
 * free_list - frees a list_t list.
 * @head: the list;
 *
 */
void free_list(list_t *head)
{
	list_t *iterate;

	iterate = head;
	while (iterate)
	{
		free(iterate->str);
		free(iterate);
		iterate = iterate->next;
	}
}
