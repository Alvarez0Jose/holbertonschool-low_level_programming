#include "hash_tables.h"

/**
 *
 *
 *
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *New_Table;

	New_Table = malloc(sizeof(hash_table_t));
	if (New_Table == NULL)
		return (NULL);

	New_Table->array = malloc(sizeof(hash_node_t *) * size);
	if (New_Table->array == NULL)
	{
		free(New_Table);
			return (NULL);
	}

	memset(New_Table->array, 0, sizeof(hash_node_t *) *size);

	New_Table->size = size;

	return (New_Table);
}
