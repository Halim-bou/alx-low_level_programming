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

	ptr = head;
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
		if (len == index)
		{
			node = ptr->prev;
			return (node);
		}
		if (len > index)
			return (NULL);
		len++;
	}
	return (NULL);
}
