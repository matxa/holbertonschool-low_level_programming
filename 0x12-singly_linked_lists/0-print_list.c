#include "lists.h"

/**
 * print_list - print linked list
 * @h: type list_t
 * Return: printed elements
 *
 */

size_t print_list(list_t *h)
{
	list_t *temp_h = h;
	int num_of_elem = 0;

	while (temp_h != NULL)
	{
		if (temp_h->str)
		{
			for (temp_h->len = 0; temp_h->str[temp_h->len] != '\0'; temp_h->len++)
			{
			}
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
	printf("\n");
	return (num_of_elem);
}
