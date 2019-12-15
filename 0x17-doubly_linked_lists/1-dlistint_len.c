#include "lists.h"

/**
* dlistint_len - length of a linked list
* @h: header
* Return: size_t
*
*/

size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}

	return (i);
}
