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
	int i;

	while (temp_h != NULL)
	{
		if (temp_h->str)
		{
			for (i = 0; temp_h->str[i] != '\0'; i++)
			{
			}
			printf("[%u] %s", i, temp_h->str);
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
