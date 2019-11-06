#include "lists.h"

/**
* reverse_listint - reverse list
* @head - head
* Return: list
*
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *next = NULL;
	listint_t *prev = *head;

	if (head == NULL)
		return (NULL);

	*head = NULL;
	while (prev)
	{
		next = prev->next;
		prev->next = *head;
		*head = prev;
		prev = next;
		
	}

	return (*head);
}
