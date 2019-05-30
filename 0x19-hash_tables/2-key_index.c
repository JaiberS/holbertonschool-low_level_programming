#include "hash_tables.h"

/**
 * key_index - gives the index for the key
 * @key: The key
 * @size: The size of the hash table
 *
 * Return: the index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = hash_djb2(key);

	return (hash % size);
}
