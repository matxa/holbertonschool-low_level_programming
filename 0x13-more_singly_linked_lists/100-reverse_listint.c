#include "lists.h"

/**
* reverse_listint - reverse list
* @head - head
* Return: list
*
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *current = *head;
	listint_t *next;
	listint_t *prev;

	if (*head == NULL)
		return (NULL);

	while (current)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
		
	}
	*head = prev;

	return (0);
}
