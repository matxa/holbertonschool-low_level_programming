#include "lists.h"

/**
 * insert_dnodeint_at_index - get node at index
 * @h: h of the list
 * @idx: index
 * @n: node's int value
 * Return: insert at index
 *
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *temp = *h;
	unsigned int i = 0;

	if (new_node == NULL)
		return (NULL);

	if (*h == NULL && idx != 0)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node = add_dnodeint(h, n);
		return (new_node);
	}

	while (temp)
	{
		if (i == (idx - 1))
		{
			new_node->next = temp->next;
			new_node->prev = temp;
			temp->next = new_node;
			if (new_node->next != NULL)
				new_node->next->prev = new_node;
			return (new_node);
		}
		temp = temp->next;
		i++;
	}
	if (idx > i)
		return (NULL);

	return (new_node);
}
