#include "lists.h"

/**
* delete_nodeint_at_index - delete node at the given index
* @head: head
* @index: index
* Return: deleted index
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *next;
	listint_t *temp = *head;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}

	for (i = 0; temp != NULL && i < index - 1; i++)
	{
		temp = temp->next;
	}

	if (temp == NULL || temp->next == NULL)
		return (-1);

	next = temp->next->next;

	free(temp->next);

	temp->next = next;

	return (1);
}
