#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: The hash table
 * @key: The key
 * @value: The value
 *
 * Return: 1 succeed 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int hash, size, m0 = 0;
	hash_table_t *ht2;
	hash_node_t *head;

	if (strcmp(key, "") == 0 || value == NULL || key == NULL)
		return (0);
	ht2 = ht;
	size = ht2->size;
	hash = key_index((const unsigned char *)key, size);
	head = ht2->array[hash];
	for (; head; head = head->next)
	{
		if (strcmp(head->key, key) == 0)
		{
			m0 = 1;
			break;
		}
	}
	if (m0 == 0)
		head = add_node(&(ht2->array[hash]), key, value);
	else
	{
		free(head->value);
		head->value = strdup(value);
	}
	if (head == NULL)
		return (0);
	return (1);
}

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: address of the struct
 * @key: key to be added
 * @value: value to be added
 *
 * Return: the address of the new element, or NULL if it failed
 */

hash_node_t *add_node(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *siguiente;

	siguiente = malloc(sizeof(hash_node_t));
	if (siguiente == NULL)
	{
		free(siguiente);
		return (NULL);
	}
	siguiente->value = strdup(value);
	siguiente->key = strdup(key);
	siguiente->next = *head;
	*head = siguiente;
	return (*head);
}
