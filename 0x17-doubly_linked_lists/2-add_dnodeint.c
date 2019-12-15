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
	dlistint_t *n2 = malloc(sizeof(dlistint_t));

	n2->n = n;
	n2->next = *head;
	*head = n2;

	if (*head == NULL)
	{
		return (NULL);
	}

	return (n2);
}
