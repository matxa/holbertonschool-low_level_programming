#include "hash_tables.h"
/**
* hash_table_create - function that creates a hash table
* @size: the size of the array
*
*/

hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *hash_table = malloc(sizeof(unsigned long int) * size);
    if (hash_table != NULL)
    {
        return (hash_table);
    }

    return (NULL);
}
