#include "hash_tables.h"
#include <stdlib.h>
/**
 * key_index - function that gives you the index of a key
 * @key: The key
 * @size: the size of the array
 *
 * Return: the index at which the key should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = hash_djb2(key);
	unsigned long int true_hash = hash % size;

	return (true_hash);
}
