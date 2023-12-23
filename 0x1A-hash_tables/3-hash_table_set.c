#include "hash_tables.h"
/**
 * hash_table_set - a function that adds an element to the hash table
 *@ht: is the hash table to be updated
 *@key: is the key.
 *@value: the value associated with the key.
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *newnode, *bucket;
	unsigned long int index = 0;
	char *value_copy;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
	{
		return (0);
	}

	value_copy = strdup(value);
	if (value_copy == NULL)
	{
		return (0);
	}

	index = key_index((const unsigned char *)key, ht->size);
	bucket = ht->array[index];
	while (bucket)
	{
		if (strcmp(bucket->key, key) == 0)
		{
			free(bucket->value);
			bucket->value = value_copy;
			return (1);
		}
		bucket = bucket->next;
	}

	newnode = malloc(sizeof(hash_node_t));
	if (newnode == NULL)
	{
		free(value_copy);
		return (0);
	}
	newnode->key = strdup(key);
	if (newnode->key == NULL)
	{
		free(newnode);
		return (0);
	}
	newnode->value = value_copy;
	newnode->next = ht->array[index];
	ht->array[index] = newnode;

	return (1);
}
