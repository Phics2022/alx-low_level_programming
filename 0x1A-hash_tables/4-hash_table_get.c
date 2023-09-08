#include "hash_tables.h"
#include <string.h>
/**
 * hash_table_get - function that retrieves a value associated with a key
 * @ht: the hash table to look into
 * @key: the key we are looking for
 *
 * Return: The value associated to the key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *temp;

	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
		return (NULL);

	temp = ht->array[index];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
		temp = temp->next;
	}
	return (NULL);
}
