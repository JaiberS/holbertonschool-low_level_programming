#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table
 * @size: size of the array
 *
 * Return: the hash table address
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table = NULL;

	hash_table = malloc(sizeof(hash_table) * 2);
	if (hash_table == NULL)
		return(NULL);
	hash_table->array = malloc(sizeof(hash_node_t **) * size);
	if (hash_table->array == NULL)
	{
		free (hash_table);
		return(NULL);
	}
	hash_table->size = size;
	return (hash_table);
}
