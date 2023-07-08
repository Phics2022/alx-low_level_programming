#include "hash_tables.h"
#include <stdlib.h>
/**
 * key_index - function that gives you the index of a key.
 * @key: the key
 * @size: the size of the array
 *
 * Return: the index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;
	unsigned long int hash = hash_djb2(key);

	index =  hash % size;
	return (index);
}
