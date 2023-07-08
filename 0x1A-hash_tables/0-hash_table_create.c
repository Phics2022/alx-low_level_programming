#include "hash_tables.h"
#include <stdlib.h>
#include <unistd.h>
/**
 * hash_table_create - create a hash table
 * @size: size of the array
 *
 * Return: a pointer to the newly created table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	/* creates the table */
	hash_table_t *new_table = (hash_table_t *) malloc(sizeof(hash_table_t));
	unsigned long int i;

	if (new_table == NULL)
		return (NULL);
	new_table->size = size;
	/* realloc size of the node */
	new_table->array = calloc(new_table->size, sizeof(hash_node_t *));

	for (i = 0; i < new_table->size; i++)
		new_table->array[i] = NULL;

	return (new_table);
}
