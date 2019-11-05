#include "lists.h"

/**
* free_listint2 - free list v2
* @head: head
*
*/

void free_listint2(listint_t **head)
{
	listint_t *current_node, *next_node;


	if (head)
	{
		current_node = *head;
		while (current_node)
		{
			next_node = current_node->next;
			free(current_node);
			current_node = next_node;
		}
		*head = NULL;
	}
}
