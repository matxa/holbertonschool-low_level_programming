#include "lists.h"

/**
 * add_dnodeint - print linked list
 * @head: head of the list
 * @n: int value
 * Return: new_node
 *
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	if (*head == NULL)
	{
		new_node->prev = NULL;
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	new_node->n = n;
	new_node->next = *head;
	new_node->prev = new_node;

	*head = new_node;
	return (new_node);
}
