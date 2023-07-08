#include "hash_tables.h"
#include <string.h>
#include <stdlib.h>
/**
 * hash_table_get - etrieves a value associated with a key.
 * @ht: hash table
 * @key: the keu
 *
 * Return: the value or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *current;

	if (ht == NULL || key == NULL)
		return (NULL);
	index = key_index((const unsigned char *) key, ht->size);
	current = ht->array[index];
	if (current == NULL)
	{
		return (NULL);
	}
	else if (strcmp(current->key, key) == 0)
	{
		return (current->value);
	}
	else
	{
		while (current != NULL)
		{
			if (strcmp(current->key, key) == 0)
				return (current->value);
			current = current->next;
		}
		return (NULL);
	}
	return (NULL);
}
