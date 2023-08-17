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
	dlistint_t *ptr, *pr_ptr;
	unsigned int len = 0;

	ptr = *h;
	if (*h == NULL && idx != 0)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	if (*h != NULL)
	{
		pr_ptr = NULL;
		while (ptr->prev != NULL)
			ptr = ptr->prev;
		for (len = 0; ptr != NULL && len < idx; len++)
		{
			pr_ptr = ptr;
			ptr = ptr->next;
		}
		if (len == idx)
		{
			new->n = n;
			new->prev = pr_ptr;
			if (ptr != NULL)
				ptr->prev = new;
			new->next = ptr;
			if (idx != 0)
				pr_ptr->next = new;
			else
				*h = new;
			return (new);
		}
		return (NULL);
	}
	new->next = NULL;
	new->prev = NULL;
	new->n = n;
	*h = new;
	return (new);
}
