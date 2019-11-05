#include "lists.h"

/**
* add_nodeint_end - adds node to the end
* @head: head
* @n: num to be added
* Return: num
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp = NULL;
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node)
	{
		new_node->n = n;
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
