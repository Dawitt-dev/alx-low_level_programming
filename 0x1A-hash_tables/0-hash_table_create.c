#include "hash_tables.h"
/**
 * hash_table_create - a function that creates a hash table.
 *@size:  the size of the array
 *
 * Return:  a pointer to the newly created hash table or NULL.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	hash_node_t **array;
	size_t i;


	array = malloc(sizeof(hash_node_t) * size);
	if (array == NULL)
	{
		return (NULL);
	}

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
	{
		free(array);
		return (NULL);
	}

	table->size = size;
	table->array = array;

	for (i = 0; i < size; ++i)
	{
		array[i] = NULL;
	}

	return (table);

	free(table->array);
	free(array);

}

