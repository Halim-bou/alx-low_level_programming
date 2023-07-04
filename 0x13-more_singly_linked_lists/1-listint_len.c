#include "lists.h"
#include <stdlib.h>

/**
 * listint_len - funtion that give the length of a linked list
 * @h: a pointer to the first node
 *
 * Return: length of the linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
