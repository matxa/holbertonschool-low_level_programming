#include "lists.h"

/**
* pop_listint - deletes the head node of listint_t and return node's data
* @head: head of list
* Return: int
*
*/

int pop_listint(listint_t **head)
{
	int a = 0;
	listint_t *temp = NULL;

	if (*head == NULL)
	{
		return (0);
	}

	temp = *head;
	a = temp->n;
	*head = temp->next;
	free(temp);

	return (a);
}
