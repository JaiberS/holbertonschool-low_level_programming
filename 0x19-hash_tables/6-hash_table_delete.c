#include "hash_tables.h"

/**
 * hash_table_delete - deletes the hash table
 * @ht: the hash table
 *
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int sizeht = 0, i = 0;
	hash_node_t *head;
	hash_node_t *prev;

	sizeht = ht->size;
	printf("{");
	for (i = 0; i < sizeht; i++)
	{
		if (ht->array[i] != NULL)
		{
			head = ht->array[i];
			for (; head != NULL; )
			{
				prev = head;
				head = head->next;
				free(prev->key);
				free(prev->value);
				free(prev);
			}
		}
	}
	free(ht->array);
	free(ht);
}
