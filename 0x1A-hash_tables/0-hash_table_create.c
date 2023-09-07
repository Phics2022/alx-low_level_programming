#include "hash_tables.h"
#include <stdlib.h>
/**
 * hash_table_create - creates an hash table
 * @size: The size of the table
 *
 * Return: a pointer to the hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	int i = 0;
	hash_table_t *new_table;

	if (size <= 0)
	return (NULL);
	/* creating memory for the hash table */
	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
		return (NULL);
	new_table->size = size;
	/* creating space for the array of items */
	/* This allocates space for `hash_node` for `size` number of times */
	new_table->array = calloc(new_table->size, sizeof(hash_node_t));

	/* place NULL in every element of the hash array */
	for (i = 0; i < new_table->size; i++)
		new_table->array[i] = NULL;
	return (new_table);
}
