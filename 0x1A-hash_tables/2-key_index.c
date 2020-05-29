#include "hash_tables.h"

/**
 * key_index - function that gives you the index of a key.
 * @key: string key
 * @size:  of the array of the hash table
 * Return: index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (!key || !size)
	{
		return (NULL);
	}

	unsigned long int index = hash_djb2(key) % size;

	return (index);
}
