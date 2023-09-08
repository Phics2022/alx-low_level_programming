#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht: the hash table
 * @key: the key
 * @value: the value associated with the key
 *
 * Return: 1 if succeeded or 0 if failed
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *item;
	hash_node_t *temp;

	if (key == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	item = malloc(sizeof(hash_node_t));
	temp = ht->array[index];

	if (item == NULL)
		return (0);
	item->key = malloc(strlen(key) + 1);
	item->value = malloc(strlen(value) + 1);
	item->next = NULL;
	strcpy(item->key, key);
	strcpy(item->value, value);

	if (temp == NULL)
	{
		ht->array[index] = item;
	}
	else
	{
		item->next = temp;
		ht->array[index] = item;
	}
	return (1);
}
