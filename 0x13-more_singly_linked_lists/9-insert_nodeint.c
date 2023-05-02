#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - insert a new node at
 * a given position
 * @head: a pointer to pointer to the first node
 * @idx: index where the node should be added
 * @n: the dat of the node
 *
 * Return: the adress of the new node or NUll
 * if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 1;
	listint_t *node, *ptr;

	if (head == NULL)
		return (NULL);

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	if (idx > 0)
	{
		ptr = *head;
		while (ptr)
		{
			if (i == idx)
			{
				node->next = ptr->next;
				ptr->next = node;
				return (node);
			}
			ptr = ptr->next;
			i++;
		}
		if (idx > i)
			return (NULL);
	}
	else
	{
		node->next = *head;
		*head = node;
	}
	return (node);
}
