#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at index
 * @head: head of theade list
 * @index: index
 * Return: 1 if it succeeded, -1 if it failed
 *
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int i;

	if (*head == NULL)
		return (-1);
	for (i = 0; temp != NULL && i < index; i++)
		temp = temp->next;
	if (temp == NULL)
		return (-1);
	free_node(head, temp);
	return (1);
}

/**
 * free_node - delete node
 * @head: head of theade list
 * @node_to_del: index
 * Return: 1 if it succeeded, -1 if it failed
 *
 */

int free_node(dlistint_t **head, dlistint_t *node_to_del)
{
	if (*head == NULL || node_to_del == NULL)
		return (-1);
	if (*head == node_to_del)
		*head = node_to_del->next;
	if (node_to_del->next != NULL)
		node_to_del->next->prev = node_to_del->prev;
	if (node_to_del->prev != NULL)
		node_to_del->prev->next = node_to_del->next;
	free(node_to_del);
	return (1);
}
