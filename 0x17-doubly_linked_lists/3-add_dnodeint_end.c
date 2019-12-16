#include "lists.h"

/**
* add_dnodeint_end - add node to end of d.linked.list
* @head: head of the list
* @n: data of the node
* Return: address of the new element, or NULL if it failed
*
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	/* allocate node */
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);
	/* get the address of the last node */
	dlistint_t *last = (*head);

	/* put in the data */
	new_node->n = n;
	/* This is goin to be the last node, set it to NULL */
	new_node->next = NULL;

	/* If the linked list is empty, then make next node the new head */
	if (*head == NULL)
	{
		new_node->prev = NULL;
		(*head) = new_node;
		return (NULL);
	}
	/* else treverse till the last node */
	while (last->next != NULL)
		last = last->next;
	/* change the next of last node */
	last->next = new_node;
	/* make last node as previous of new node */
	new_node->prev = last;

	return (new_node);
}
