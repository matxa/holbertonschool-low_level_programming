#include "lists.h"

/**
 * print_dlistint - print linked list
 * @h: type list_t
 * Return: printed elements
 *
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *last;
	int f = 0;

	while (h)
	{
		printf("%d\n", h->n);
		last = h;
		h = last->next;
		f++;
	}
	return (f);
}
