#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *next_entry;

	if (ht == NULL)
	{
		return;
	}

	for (i = 0; i < ht->size; i++)
	{
		hash_node_t *entry = ht->array[i];

		while (entry != NULL)
		{
			next_entry = entry->next;
			free(entry->key);
			free(entry->value);
			free(entry);
			entry = next_entry;
		}
	}
	free(ht->array);
	free(ht);
}
