#include "lists.h"

/**
* add_dnodeint_end - add node to the end of d.linked.list
* @head: head of the list
* @n: int data to enter at the end of d.linked.list
* Return: the address of the new element, or NULL if it failed
*
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
        dlistint_t *n2 = malloc(sizeof(dlistint_t));
        dlistint_t *last;

	if (n2 == NULL)
		return (NULL);

        while (head)
        {
                last = *head;
                head = head->next;
        }

	n2->n = n;
	n2->prev = last;
	last = n2;

	// if (*head == NULL)
	// {
	// 	return (NULL);
	// }

	return (n2);
}
