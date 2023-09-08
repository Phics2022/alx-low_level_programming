#include "hash_tables.h"
#include <stdlib.h>
/**
 * hash_table_delete - function that deletes a hash table
 * @ht: the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp;
	hash_node_t *temp2;
	unsigned long int i = 0;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			temp = ht->array[i];
			while (temp != NULL)
			{
				temp2 = temp->next;
				free(temp->key);
				free(temp->value);
				free(temp);
				temp = temp2;
			}
		}
	}
	free(ht->array);
	free(ht);
}
