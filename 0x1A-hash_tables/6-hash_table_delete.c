#include "hash_tables.h"

/**
 * hash_table_delete - a function that deletes a hash table
 * @ht: HashTable
 * Return: VOID
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp;
	hash_node_t *cur_temp;
	unsigned long int i;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		cur_temp = ht->array[i];
		while (cur_temp)
		{
			temp = cur_temp;
			cur_temp = cur_temp->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
	}
    free(cur_temp);
	free(ht->array);
	free(ht);
}
