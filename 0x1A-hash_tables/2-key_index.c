#include "hash_tables.h"

/**
 * key_index - Gives the index of a key in the hash table
 * @key: The key
 * @size: The size of the array of the hash table
 *
 * Return: The index at which the key/value pair should be stored in the array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int value;

	if (key == NULL || size == 0)
		return (0);

	value = hash_djb2(key);
	return (value % size);
}
