#include "lists.h"

/**
 * dlistint_len - print linked list
 * @h: type list_t
 * Return: num of elements
 *
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *last;
	int f = 0;

	while (h)
	{
		last = h;
		h = last->next;
		f++;
	}
	return (f);
}
