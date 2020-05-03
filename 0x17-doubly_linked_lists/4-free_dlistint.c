#include "lists.h"

/**
 * free_dlistint - free or delete all nodes
 * @head: head
 *
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = NULL;

	if (head)
	{
		while ((temp = head) != NULL)
		{
			head = head->next;
			free(temp);

		}
	}
}
