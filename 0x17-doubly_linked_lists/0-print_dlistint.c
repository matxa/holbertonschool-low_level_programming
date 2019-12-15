#include "lists.h"

/**
* print_dlistint - print doubly linked list
* @h: header of list
* Return: size_t
*
*/

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *last;
	int i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		last = h;
		h = h->next;
		i++;
	}
	return (i);
}
