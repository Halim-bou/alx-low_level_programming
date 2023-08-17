#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - insert a new node at index
 * @h: pointer to pointer to the first node
 * @idx: index to insert the new node
 * @n: data of the new node
 * Return: the address of the new node or NULL if it field
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = NULL;
	dlistint_t *ptr, *ptr2 = NULL;
	unsigned int len = 0, count = 0;

	if (*h == NULL && idx != 0)
		return (NULL);
	while ((*h)->prev != NULL)
		*h = (*h)->prev;
	ptr = *h;
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
		len++;
	}
	ptr = *h;
	if (idx == 0)
	{
		new = add_dnodeint(&ptr, n);
		return (new);
	}
	if (idx == len)
	{
		new = add_dnodeint_end(&ptr, n);
		return (new);
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	while (count < idx - 1)
	{
		ptr = ptr->next;
		count++;
	}
	ptr2 = ptr->next;
	ptr->next = new;
	ptr2->prev = new;
	new->next = ptr2;
	new->prev = ptr;
	new->n = n;
	return (new);
}
