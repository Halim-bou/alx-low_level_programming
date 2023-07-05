#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - function that found a node at given index
 * @head: pointer to the first node
 * @index: the index of the node looking for
 *
 * Return: The node or NULL if it's not exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (i != index)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
		i++;
	}
	return (head);
}
