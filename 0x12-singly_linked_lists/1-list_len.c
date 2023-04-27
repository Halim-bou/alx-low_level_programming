#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - The elements in a linked list_t list
 * @h: The linked list
 *
 * Return: The number of elements.
 */
size_t list_len(const list_t *h)
{
	size_t cnt = 0;

	while (h != NULL)
	{
		h = h->next;
		cnt++;
	}
	return (cnt);
}
