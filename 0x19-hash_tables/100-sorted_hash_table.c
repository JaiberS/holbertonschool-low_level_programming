#include "hash_tables.h"

/**
 * shash_table_create - Creates a hash table
 * @size: size of the array
 *
 * Return: the hash table address
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *shash_table = NULL;

	shash_table = malloc(sizeof(shash_table_t));
	if (shash_table == NULL)
		return (NULL);
	shash_table->array = calloc(size, sizeof(hash_node_t *));
	if (shash_table->array == NULL)
	{
		free(shash_table);
		return (NULL);
	}
	shash_table->size = size;
	shash_table->shead = NULL;
	shash_table->stail = NULL;
	return (shash_table);
}

/**
 * shash_table_set - adds an element to the hash table
 * @ht: The hash table
 * @key: The key
 * @value: The value
 *
 * Return: 1 succeed 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int hash, size, m0 = 0;
	shash_table_t *ht2;
	shash_node_t *head;

	if (strcmp(key, "") == 0 || value == NULL || key == NULL || ht == NULL)
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
		head = add_snode(&(ht2->array[hash]), &(ht2->shead),
				 ht2, key, value);
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
 * @shead: sorted list head
 * @ht: Hash table
 *
 * Return: the address of the new element, or NULL if it failed
 */

shash_node_t *add_snode(shash_node_t **head, shash_node_t **shead,
			shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *siguiente, *iter = NULL;
	int i = 0;

	siguiente = malloc(sizeof(shash_node_t));
	if (siguiente == NULL)
		return (NULL);
	siguiente->value = strdup(value);
	siguiente->key = strdup(key);
	siguiente->next = *head;
	*head = siguiente;
	if (*shead == NULL)
	{
		siguiente->snext = NULL;
		siguiente->sprev = NULL;
		ht->shead = siguiente;
		ht->stail = siguiente;
	}
	else
		add_hsnode(iter, shead, key, siguiente, i, ht);
	return (*head);
}



/**
 * add_hsnode - adds a new node on a sorted list.
 * @shead: address of the struct
 * @key: key to be added
 * @iter: current node
 * @siguiente: node to be added
 * @i: iterator on the word
 * @ht: hash table
 *
 * Return: the address of the new element, or NULL if it failed
 */

void add_hsnode(shash_node_t *iter, shash_node_t **shead, const char *key,
		shash_node_t *siguiente, int i, shash_table_t *ht)
{
	for (i = 0, iter = *shead; iter != NULL; i++)
	{
		if (key[i] == '\0' && iter->key[i] == '\0')
			break;
		if (key[i] == (iter->key)[i])
			continue;
		if (key[i] > (iter->key)[i] && iter->snext != NULL)
		{
			i = -1;
			iter = iter->snext;
			continue;
		}
		if (key[i] < (iter->key)[i])
		{
			siguiente->snext = iter;
			siguiente->sprev = iter->sprev;
				iter->sprev = siguiente;
				if (siguiente->sprev != NULL)
					siguiente->sprev->snext = siguiente;
				if (siguiente->sprev == NULL)
					ht->shead = siguiente;
				break;
		}
		if (iter->snext == NULL)
		{
			siguiente->snext = NULL;
				siguiente->sprev = iter;
				iter->snext = siguiente;
				ht->stail = siguiente;
				break;
		}
	}
}


/**
 * shash_table_get - get the value by key
 * @ht: The hash table
 * @key: The key
 *
 * Return: The value or NULL
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int hash, size;
	shash_node_t *head;

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


/**
 * shash_table_print - print the hash table
 * @ht: The hash table
 *
 */
void shash_table_print(const shash_table_t *ht)
{
	unsigned long int m0 = 0;
	shash_node_t *head;

	if (ht == NULL)
		return;
	printf("{");
	for (head = ht->shead; head != NULL; head = head->snext)
	{
		if (m0 != 0)
			printf(", ");
		else
			m0 = 1;
		printf("\'%s\': \'%s", head->key, head->value);
		printf("\'");
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - print the hash table in rev
 * @ht: The hash table
 *
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	unsigned long int m0 = 0;
	shash_node_t *head;

	if (ht == NULL)
		return;
	printf("{");
	head = ht->stail;
	for (; head != NULL; head = head->sprev)
	{
		if (m0 != 0)
			printf(", ");
		else
			m0 = 1;
		printf("\'%s\': \'%s", head->key, head->value);
		printf("\'");
	}
	printf("}\n");
}

/**
 * shash_table_delete - deletes the hash table
 * @ht: the hash table
 *
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int sizeht, i;
	shash_node_t *head;
	shash_node_t *prev;

	sizeht = ht->size;
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
