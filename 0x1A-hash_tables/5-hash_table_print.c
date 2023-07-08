#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current;
	unsigned long int i = 0;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		if (current)
		{
			while (current != NULL)
			{
				printf("'%s': '%s'", current->key, current->value);
					printf(", ");
				current = current->next;
			}
		}
	}
	printf("}\n");
}
