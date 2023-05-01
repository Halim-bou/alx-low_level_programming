#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - 
 * @head:
 *
 * Retrun:
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int data;

	if (*head != NULL)
	{
		ptr = *head->next;
		data = *head->data;
		free(*head);
		*head = ptr;
	}
	return (data);
}
