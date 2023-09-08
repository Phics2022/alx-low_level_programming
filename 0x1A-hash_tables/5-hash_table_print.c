#include "hash_tables.h"
#include <stdio.h>
/**
 * hash_table_print - function that prints the hash table
 * @ht: the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp;
	unsigned long int i;
	int track = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			temp = ht->array[i];
			while (temp != NULL)
			{
				track += 1;
				if (track != 1)
					printf(", ");
				printf("'%s': '%s'", temp->key, temp->value);
				temp = temp->next;
			}
		}
	}
	printf("}\n");
}
