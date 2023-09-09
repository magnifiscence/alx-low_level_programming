#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *hnode;
	unsigned long int i;
	unsigned char comma_flag = 0;

	if (ht == NULL)
		return;

	printf("{");

	for (i = 0; i < ht->size; i++)
		if (ht->array[i] != NULL)
		{
			if (comma_flag == 1)
				printf(", ");

			hnode = ht->array[i];
			while (hnode != NULL)
			{
				printf("'%s': '%s'", hnode->key, hnode->value);
				hnode = hnode->next;
				if (hnode != NULL)
					printf(", ");
			}
			comma_flag = 1;
		}

	printf("}\n");
}
