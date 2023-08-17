#include "lists.h"
#include <stdlib.h>

/**
 * get_dnodeint_at_index - get the nth node in linked list
 * @head: a pointer to the first node
 * @index: index of the node to get
 * Return: the address of the nth node or NULL if it fieled
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr;
	unsigned int len = 0;

	if (head == NULL)
		return (NULL);
	while (head->prev != NULL)
		head = head->prev;
	if (index == 0)
		return (head);
	ptr = head;
	while (ptr != NULL)
	{
		ptr = ptr->next;
		len++;
		if (len == index)
		{
			return (ptr);
		}
	}
	return (NULL);
}
