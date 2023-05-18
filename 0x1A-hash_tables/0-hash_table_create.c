#include "hash_tables.h"

/**
 * *hash_table_create - creates a hash table.
 * @size: size of the array
 * Return: pointer to the newly created hash table,
 *	NULL on failure.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = NULL;
	int i;

	if (size < 1)
		return NULL;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);

	table->entries = malloc(sizeof(hash_node_t *) * size);
	if (table->entries == NULL)
		return (NULL);

	table->size = size;
	for (i = 0; i < size; i++)
		table->entries[i] = NULL;

	return table;
}
