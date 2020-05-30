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
	unsigned long int index;
	hash_node_t *temp;
	hash_node_t *new_node = NULL;

	if (ht == NULL || strcmp(key, "") == 0 || value == NULL || key == NULL)
		return (0);
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		return (0);
	}
	index = key_index((const unsigned char *)key, ht->size);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;
	if (ht->array[index] == NULL)
	{
		ht->array[index] = new_node;
		return (1);
	}
	temp = ht->array[index];
	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			free(new_node);
			return (1);
		}
		temp = temp->next;
	}
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
