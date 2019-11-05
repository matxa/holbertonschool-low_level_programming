#include "lists.h"

/**
* free_listint - free int list
* @head: head
*
*/

void free_listint(listint_t *head)
{
	listint_t *temp = NULL;

	if (head)
	{
		while ((temp = head) != NULL)
		{
			head = head->next;
			free(temp);
		}

	}
}
