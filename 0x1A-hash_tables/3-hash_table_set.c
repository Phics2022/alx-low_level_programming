#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
hash_node_t *create_item(const char *key, const char *value);
/**
 * hash_table_set - adds an element to the hash table
 * @ht: the hash table
 * @key: the key
 * @value: the key's value
 *
 * Return: 1 or 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *item;
	hash_node_t *current;
	unsigned long int index;

	if (key == NULL || ht == NULL)
		return (0);
	item = create_item(key, value);
	index = key_index((const unsigned char *) key, ht->size);
	current = ht->array[index];

	/*add the item to the list*/
	if (current == NULL)
	{
		ht->array[index] = item;
	}
	else
	{
		if (strcmp(item->key, current->key) == 0)
		{
			ht->array[index] = item;
		}
		else
		{
			item->next = current;
			ht->array[index] = item;
		}
	}
	return (1);
}

/**
 * create_item - create an element item
 * @key: key
 * @value: value
 *
 * Return: The address of the new element
 */
hash_node_t *create_item(const char *key, const char *value)
{
	hash_node_t *item;

	item = malloc(sizeof(hash_node_t));
	item->key = malloc(strlen(key) + 1);
	item->value = malloc(strlen(value) + 1);
	strcpy(item->key, key);
	strcpy(item->value, value);
	item->next = NULL;
	return (item);
}
