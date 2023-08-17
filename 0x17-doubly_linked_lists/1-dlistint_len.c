#include "lists.h"
#include <stdlib.h>

/**
 * dlistint_len - count number of element in doubly linked list
 * @h: head pointer to the doubly linked list
 * return: length of doubly linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int len = 0;
	const dlistint_t *ptr;

	ptr = h;
	while (ptr != NULL)
	{
		ptr = ptr->next;
		len++;
	}
	return (len);
}
