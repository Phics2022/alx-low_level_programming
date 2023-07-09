#include "hash_tables.h"
#include <stdlib.h>
/**
 * hash_table_delete - delete a hash table
 * @ht: hash table
 *
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *item;
	hash_node_t *temp;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		item = ht->array[i];

		if (item != NULL)
		{
			while (item != NULL)
			{
				temp = item->next;
				free(item->key);
				free(item->value);
				free(item);
				item = temp;
			}
		}
	}
	free(ht->array);
	free(ht);
}
