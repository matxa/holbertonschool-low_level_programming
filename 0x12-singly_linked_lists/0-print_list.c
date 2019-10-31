#include "lists.h"

/**
 * print_list - print linked list
 * @h: type list_t
 * Return: printed elements
 *
 */

size_t print_list(const list_t *h)
{
	const list_t *temp_h = h;
	int num_of_elem = 0;

	while (temp_h != NULL)
	{
		if (temp_h->str)
		{
			printf("[%u] %s", temp_h->len, temp_h->str);
		}
		else
		{
			printf("[0] (nil)");
		}
		temp_h = temp_h->next;
		num_of_elem++;
		printf("\n");
	}
	return (num_of_elem);
}
