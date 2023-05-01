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

	ptr = *head;
	if (ptr != NULL)
	{
		ptr = ptr->next;
		data = ptr->n;
		free(*head);
		*head = ptr;
	}
	return (data);
}
