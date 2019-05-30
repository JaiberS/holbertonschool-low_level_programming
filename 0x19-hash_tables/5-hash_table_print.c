#include "hash_tables.h"

/**
 * hash_table_print - print the hash table
 * @ht: The hash table
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int sizeht = 0, i = 0, j = 0, size = 0, k = 0, ns, m0 = 0;
	unsigned long int nsize = 0;
	size_t ln = 0;
	hash_node_t *head;
	char *string;

	string = malloc(sizeof(string));
	size = 8;
	sizeht = ht->size;
	for (i = 0; i < sizeht && string; i++)
	{
		if (ht->array[i] != NULL)
		{
			head = ht->array[i];
			for (; head != NULL; head = head->next)
			{
				if (m0 != 0)
				{
					if (j + 1 >= size)
					{
						string = realloc(string, size + 2);
						size += 2;
					}
					string[j] = ',';
					j++;
					string[j] = ' ';
					j++;
				}
				else
					m0 = 1;
				if (j >= size)
				{
					string = realloc(string, size + 1);
					size += 1;
				}
				string[j] = '\'';
				j++;
				ln = strlen(head->key);
				ns = j + ln;
				if (ns >= size)
				{
					nsize = ns - size;
					string = realloc(string, size + nsize);
					size += nsize;
				}
				if (ln != 0)
				{
					for (k = 0; (head->key)[k]; k++, j++)
						string[j] = (head->key)[k];
				}
				if (j + 3 >= size)
				{
					string = realloc(string, size + 4);
					size += 4;
				}
				string[j] = '\'';
				j++;
				string[j] = ':';
				j++;
				string[j] = ' ';
				j++;
				string[j] = '\'';
				j++;
				ln = strlen(head->value);
				ns = j + ln;
				if (ns >= size)
				{
					nsize = ns - size;
					string = realloc(string, size + nsize);
					size += nsize;
				}
				if (ln != 0)
				{
					for (k = 0; (head->value)[k]; k++, j++)
						string[j] = (head->value)[k];
				}
				if (j >= size)
				{
					string = realloc(string, size + 1);
					size += 1;
				}
				string[j] = '\'';
				j++;
			}
		}
	}
	printf("{%s}\n", string);
}
