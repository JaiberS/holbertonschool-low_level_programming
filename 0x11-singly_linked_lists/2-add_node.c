#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: address of the struct
 * @str: string to be added
 *
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *siguiente;
	int i = 0;

	siguiente = malloc(sizeof(list_t));
	if (siguiente == NULL)
	{
		free(siguiente);
		return (0);
	}
	siguiente->str = strdup(str);
	while (str[i] != '\0')
		i++;
	siguiente->len = i;
	siguiente->next = *head;
	*head = siguiente;
	return (*head);
}
