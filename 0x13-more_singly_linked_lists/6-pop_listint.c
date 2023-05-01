#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - delete the head node of a linked list
 * @head: a pointer to pointer to the first node
 *
 * Returg: the head node data.
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int data;

	if (*head == NULL)
		return (0);
	if (*head != NULL)
	{
		ptr = (**head).next;
		data = (**head).n;
		free(*head);
		*head = ptr;
	}
	return (data);
}
