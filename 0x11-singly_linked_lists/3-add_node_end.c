#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: address of the list
 * @str: string to be on the node
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *siguiente;
	list_t *anterior;
	int i = 0;

	siguiente = malloc(sizeof(list_t));
	if (siguiente == NULL)
	{
		free(siguiente);
		return (0);
	}
	while (str[i] != '\0')
		i++;
	siguiente->str = strdup(str);
	siguiente->len = i;
	siguiente->next = NULL;
	anterior = *head;
	if (anterior)
	{
		while (anterior->next)
			anterior = anterior->next;
		anterior->next = siguiente;
	}
	else
		*head = siguiente;
	return (*head);
}
