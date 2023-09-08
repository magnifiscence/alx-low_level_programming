#include "hash_table.h"

/**
 * hash_table_create - function creates a hash table
 * @size: array size
 * Return: pointer to an array
 * otherwise NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *table = (hash_table_t *) malloc(sizeof(hash_table_t));

	table->size = size;
	table->count = 0;
	table->items = (ht_item **) calloc(table->size, sizeof(ht_item *));

	for (int i = 0; i < table->size; i++)
		table->items[i] = NULL;

	return (table);
}
