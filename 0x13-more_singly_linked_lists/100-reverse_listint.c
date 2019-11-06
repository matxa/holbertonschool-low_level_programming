#include "lists.h"

/**
* reverse_listint - reverse list
* @head: - head
* Return: list
*
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *fir;
	listint_t *res;

	if (*head == NULL)
		return (NULL);

	fir = *head;
	res = fir->next;

	if (res == NULL)
	{
		return (NULL);
	}

	reverse_listint(&res);
	fir->next->next = fir;

	fir->next = NULL;

	*head = res;

	return (fir);
}
