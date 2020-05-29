#include "hash_tables.h"
/**
* hash_table_set - a function that adds an element to the hash table
* @ht: is the hash table you want to add or update the key/value to
* @key: is the key
* @value: must be duplicated
* Return: 1 if success else 0
*
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    if (ht == NULL ||  key == NULL || value == NULL)
    {
        return (0);
    }

    unsigned long int index;
    unsigned long int i = 0;

    index = key_index((const unsigned char)key, ht->size);
    while(ht->array[index]->key != NULL && (i < ht->size))
    {
        if (ht->array[index]->key == key)
        {
            ht->array[index]->value = strdup(value);
            return (1);
        }
        i++;
    }
    if (ht->array[index]->key == NULL)
    {
        ht->array[index]->key = strdup(key);
        ht->array[index]->value = strdup(value);
    }
    return (1);
}
