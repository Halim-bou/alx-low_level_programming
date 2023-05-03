#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - delete the node at indexof a
 * linked list
 * @head: a pointer to pointer to the first node
 * @index: the index of the node that should be deleted.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *ptr;
	unsigned int i = 0;

	if (head == NULL)
		return (-1);
	temp = *head;
	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (-1);
	}
	while (i < index)
	{
		ptr = temp;
		temp = temp->next;
		if (temp == NULL)
			return (-1);
		i++;
	}
	ptr->next = temp->next;
	free(temp);
	return (1);
}
