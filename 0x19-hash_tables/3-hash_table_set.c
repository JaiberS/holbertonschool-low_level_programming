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
	unsigned long int hash, size;
	hash_table_t *ht2;
	hash_node_t *head;

	ht2 = ht;
	for (size = 0; ht2->array[size] != NULL; size++)
		;
	size = 1024;
	hash = key_index((const unsigned char *)key, size);
	head = add_node(&(ht2->array[hash]), key, value);
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
