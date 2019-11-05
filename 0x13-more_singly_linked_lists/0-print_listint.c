#include "lists.h"

/**
* print_listint - print nodes
* @h: head
* Return: printed nodes
*/

size_t print_listint(const listint_t *h)
{
	int num_of_elem = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		num_of_elem++;
	}
	return (num_of_elem);
}
