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
	unsigned int i;
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *temp = *head;

	if (*head == NULL)
		return (0);

	new_node->n = n;
	new_node->next = 0;

	if (temp == NULL && idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (0);
	}
	for (i = 1; temp != NULL && i <= idx; i++)
	{
		if (i == idx)
		{
			new_node->next = temp->next;
			temp->next = new_node;
		}
		else
		{
			temp = temp->next;
		}
	}

	return (temp);
}
