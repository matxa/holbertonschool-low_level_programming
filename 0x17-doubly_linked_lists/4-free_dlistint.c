#include "lists.h"

/**
* free_dlistint - free the list
* @head: head of the list
*
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current  = head;
	dlistint_t *next_node;

	while (current)
	{
		next_node = current->next;
		free(current);
		current = next_node;
	}
}
