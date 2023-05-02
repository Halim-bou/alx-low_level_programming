#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a list
 * @head:  apointer to the first node
 * @index: the index of the nth node
 *
 * Return: the node or NULL if it failed
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	if (head != NULL)
	{
		while (head)
		{
			if (i == index)
				return (head);
			head = head->next;
			i++;
		}
	}
	return (0);
}
