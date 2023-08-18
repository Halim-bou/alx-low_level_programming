#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - function that delete the node at index
 * @head: a pointer to pointer to the first node
 * @index: index of the node to delete
 * Return: 1 if it succeede or -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr1, *ptr2;
	unsigned int len = 0;

	if (*head == NULL)
		return (-1);
	while ((*head)->prev != NULL)
		*head = (*head)->prev;
	ptr1 = *head;
	while (ptr1->next != NULL && len < index)
	{
		ptr1 = ptr1->next;
		len++;
	}
	if (index == 0 && ptr1->next != NULL)
	{
		ptr2 = ptr1;
		ptr1 = ptr1->next;
		ptr1->prev = NULL;
		*head = ptr1;
		free(ptr2);
		return (1);
	}
	if (len < index)
		return (-1);
	else if (len > 0)
	{
		ptr2 = ptr1;
		ptr1 = ptr1->prev;
		ptr1->next = ptr2->next;
		free(ptr2);
	}
	else
	{
		*head = ptr1->next;
		free(ptr1);
	}
	return (1);
}
