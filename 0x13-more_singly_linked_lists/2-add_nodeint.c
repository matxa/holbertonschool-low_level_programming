#include "lists.h"

/**
* add_nodeint - and an int to a node or as node
* @head: head of the list
* @n: int
* Return: added int
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *n1 = malloc(sizeof(listint_t));

	if (n1 != NULL)
	{
		n1->n = n;
		n1->next = *head;
		*head = n1;

		if (*head == NULL)
		{
			return (NULL);
		}
	}

	return (n1);
}
