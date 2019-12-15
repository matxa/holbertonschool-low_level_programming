#include "lists.h"

/**
* print_dlistint - print doubly linked list
* @h: header of list
* Return: size_t
*
*/

size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}

	return (i);
}
