#include "lists.h"

/**
* pop_listint - deletes the head node of listint_t and return node's data
* @head: head of list
* Return: int
*
*/

int pop_listint(listint_t **head)
{

	if (*head)
	{
		listint_t *temp = (*head)->next;
		(*head)->n = (*head)->next->n;
		(*head)->next = temp->next;
		free(temp);
	}

	return (0);
}
