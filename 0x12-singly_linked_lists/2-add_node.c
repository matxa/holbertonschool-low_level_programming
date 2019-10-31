#include "lists.h"

/**
 * add_node - add a node
 * @head: pointer to a pointer
 * @str: to be added
 * Return: added node
 */

list_t *add_node(list_t **head, const char *str)
{
	int i = 0;
	list_t *str1 = malloc(sizeof(list_t));

	while (str[i++])
		;
	i--;

	str1->str = strdup(str);
	str1->len = i;
	str1->next = *head;
	*head = str1;

	if (*head == NULL)
	{
		return (NULL);
	}

	return (str1);
}
