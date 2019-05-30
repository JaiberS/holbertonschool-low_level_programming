#include "hash_tables.h"

/**
 * hash_table_print - print the hash table
 * @ht: The hash table
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int sizeht = 0, i = 0, m0 = 0;
	hash_node_t *head;

	sizeht = ht->size;
	printf("{");
	for (i = 0; i < sizeht; i++)
	{
		if (ht->array[i] != NULL)
		{
			head = ht->array[i];
			for (; head != NULL; head = head->next)
			{
				if (m0 != 0)
					printf(", ");
				else
					m0 = 1;
				printf("\'%s\': \'%s", head->key, head->value);
				printf("\'");
			}
		}
	}
	printf("}\n");
}
