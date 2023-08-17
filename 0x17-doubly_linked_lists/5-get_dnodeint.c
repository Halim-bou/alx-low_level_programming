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
	dlistint_t *ptr, *node;
	unsigned int len = 0;

	if (head == NULL)
		return (NULL);
	while (head->prev != NULL)
		head = head->prev;
	ptr = head;
	if (index == 0)
		return (head);
	while (ptr != NULL)
	{
		ptr = ptr->next;
		len++;
		if (len == index)
		{
			node = ptr->prev;
			return (node);
		}
	}
	return (NULL);
}
