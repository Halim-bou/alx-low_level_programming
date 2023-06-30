#include <stdlib.h>
#include "lists.h"

/**
 * list_len - function that count number of nodes
 * @h: pointer to the linked list
 *
 * Return: the length
 */
size_t list_len(const list_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
		h = h->next;
	return (i);
}
