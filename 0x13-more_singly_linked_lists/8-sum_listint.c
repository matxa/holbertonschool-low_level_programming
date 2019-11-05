#include "lists.h"

/**
* sum_listint - sum of nodes n
* @head: head
* Return: sum
*/

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head)
	{
		while (head)
		{
			sum += head->n;
			head = head->next;
		}
	}
	else
	{
		return (0);
	}

	return (sum);
}
