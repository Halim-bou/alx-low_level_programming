#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - length of elements in a list
 * @h: the linked list
 *
 * Return: the number of elements in the lists.
 */
size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
