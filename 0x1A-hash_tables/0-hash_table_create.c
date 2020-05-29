#include "hash_tables.h"
/**
 * hash_table_create - function that creates a hash table
 * @size: the size of the array
 * Return: pointer to created table
 *
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;

	if (!size)
	{
		return (NULL);
	}

	hash_table = malloc(sizeof(unsigned long int) * size);
	if (hash_table == NULL)
	{
		return (NULL);
	}

	hash_table->array = malloc(sizeof(unsigned long int) * size);
	if (hash_table->array == NULL)
	{
		free(hash_table);
		return (NULL);
	}
	hash_table->size = size;

	return (hash_table);
}
