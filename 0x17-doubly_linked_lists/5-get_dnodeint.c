#include "lists.h"

/**
 * get_dnodeint_at_index - get node at index
 * @head: head of the list
 * @index: index
 * Return: node at given index
 *
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int i = 0;

	if (head == NULL)
	{
		return (NULL);
	}

	while (temp)
	{
		if (i == index)
		{
			return (temp);
		}
		temp = temp->next;
		i++;
	}
	if (index > i)
		return (NULL);

	return (temp);

}
