#include "hash_tables.h"

/**
 * hash_table_get - get the value by key
 * @ht: The hash table
 * @key: The key
 *
 * Return: The value or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int hash, size;
	hash_node_t *head;

	if (ht == NULL || key[0] == '\0' || key == NULL)
		return (NULL);
	size = ht->size;
	hash = key_index((const unsigned char *)key, size);
	if (ht->array[hash] == NULL)
		return (NULL);
	head = ht->array[hash];
	for (; head; head = head->next)
	{
		if (strcmp(head->key, key) == 0)
			break;
	}
	if (head == NULL)
		return (NULL);
	return (head->value);
}
