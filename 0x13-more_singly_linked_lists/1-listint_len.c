#include "lists.h"

/**
* listint_len - len of a list
* @h: head
* Return: len
*
*/

size_t listint_len(const listint_t *h)
{
	int num_of_elem = 0;

	while (h)
	{
		h = h->next;
		num_of_elem++;
	}
	return (num_of_elem);
}
