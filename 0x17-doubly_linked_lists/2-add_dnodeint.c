#include "lists.h"

/**
* add_dnodeint - add node to d.linked.list
* @head: head of the list
* @n: data of the node
* Return: address of the new element, or NULL if it failed
*
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));


	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	new_node->next = (*head);
	new_node->prev = NULL;
	*head = new_node;

	if (*head != NULL)
	{
		(*head)->prev = new_node;
	}
	(*head)->prev = new_node;

	return (new_node);
}
