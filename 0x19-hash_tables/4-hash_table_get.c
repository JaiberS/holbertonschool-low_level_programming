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
	/* hash_table_t *ht2; */
	hash_node_t *head;

	/* ht2 = ht; */
	/* for (size = 0; ht2->array[size] != NULL; size++) */
	/* 	; */
	size = 1024;
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
