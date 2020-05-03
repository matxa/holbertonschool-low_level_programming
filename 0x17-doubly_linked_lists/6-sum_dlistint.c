#include "lists.h"

/**
 * sum_dlistint - free or delete all nodes
 * @head: head
 * Return: sum
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
