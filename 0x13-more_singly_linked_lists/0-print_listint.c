#include "lists.h"

/**
* print_listint - print nodes
* @h: head
* Return: printed nodes
*/

size_t print_listint(const listint_t *h)
{
	const listint_t *temp_h = h;
	int num_of_elem = 0;

	while (temp_h)
	{
		printf("%d\n", temp_h->n);
		temp_h = temp_h->next;
		num_of_elem++;
	}
	return (num_of_elem);
}
