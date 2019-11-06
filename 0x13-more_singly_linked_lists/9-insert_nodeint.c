#include "lists.h"

/**
* insert_nodeint_at_index - insert
* @head: head
* @idx: the index
* @n: num to be inserted at index
* Return: the new node
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *temp;

	if (head == NULL || new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (!idx)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	temp = *head;

	while (temp)
	{
		if (i == (idx - 1))
		{
			new_node->next = temp->next;
			temp->next = new_node;
			return (new_node);
		}
		i++;
		temp = temp->next;
	}

	free(new_node);

	return (NULL);
}
