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

	if (idx == 0)
	{
		new_node->n = n;
		new_node->prev = NULL;
		new_node->next = *h;
		*h = new_node;
		return (new_node);
	}

	while (temp)
	{
		if (i == (idx - 1))
		{
			new_node->n = n;
			new_node->next = temp->next;
			temp->next = new_node;
			new_node->prev = temp->prev;
			temp->prev = new_node;
			return (new_node);
		}
		temp = temp->next;
		i++;
	}
	if (idx > i)
		return (NULL);

	return (new_node);
}
