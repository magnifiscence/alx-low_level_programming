#include "hash_tables.h"

/**
 * hash_table_create - function creates a hash table
 * @size: table size
 * Return: pointer to an array
 * otherwise NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;

	hash_table_t *hash_table_s = (hash_table_t *)malloc(sizeof(hash_table_t));

	if (hash_table_s == NULL)
	{
		return (NULL);
	}

	hash_table_s->array = (hash_node_t **)malloc(sizeof(hash_node_t *) * size);

	if (hash_table_s->array == NULL)
	{
		free(hash_table_s);
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		hash_table_s->array[i] = NULL;
	}
	hash_table_s->size = size;
	return (hash_table_s);
}
