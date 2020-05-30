#include "hash_tables.h"

/**
 * hash_table_print - print hash table
 * @ht: hash table
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp;
	unsigned long int i;
	unsigned long int switc = 1;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		while (temp)
		{
			if (switc == 0)
				printf(", ");
			printf("\'%s\': \'%s\'", temp->key, temp->value);
			switc = 0;
			temp = temp->next;
		}
	}
	printf("}\n");

}
