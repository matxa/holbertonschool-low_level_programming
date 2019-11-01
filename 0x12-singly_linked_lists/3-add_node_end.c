#include "lists.h"

/**
 * add_node_end - add to the end
 * @head: pointer to a pointer
 * @str: to be added
 * Return: str1
 *
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int i = 0;
	list_t *temp = NULL;
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node)
	{
		while (str[i++])
			;
		i--;
		new_node->str = strdup(str);
		new_node->len = i;
		new_node->next = NULL;
		if (*head == NULL)
		{
			*head = new_node;
		}
		else
		{
			temp = *head;
			while (temp->next)
			{
				temp = temp->next;
			}
			temp->next = new_node;
		}
	}
	else
	{
		return (NULL);
	}
	return (new_node);
}
