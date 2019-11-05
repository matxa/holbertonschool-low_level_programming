#include "lists.h"

/**
* get_nodeint_at_index - get at index
* @head: head of list
* @index: index of node
* Return: return index
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (head)
	{
		while (head)
		{
			if (count == index)
				return (head);
			count++;
			head = head->next;
		}

	}
	return (NULL);
}
