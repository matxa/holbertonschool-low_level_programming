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
    hash_node_t *temp;
    hash_node_t *new_node = malloc(sizeof(hash_node_t));
    if (new_node == NULL)
    {
        return (0);
    }
    new_node->value = strdup(value);
    new_node->next = NULL;

    index = key_index((const unsigned char *)key, ht->size);

    if (ht->array[index] == NULL)
    {
        ht->array[index] = new_node;
    }
    else
    {
        temp = ht->array[index];
        while (temp->next)
        {
            temp = temp->next;
        }
        temp->next = new_node;
    }

    return (1);
}
