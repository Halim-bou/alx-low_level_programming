#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - add doubly node in the end of a doubly linked list
 * @head: a pointer to pointer to the first node
 * @n: data of doubly node
 * Return: adresse of the new element or NULL if it fieled
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;
	dlistint_t *ptr;

	ptr = *head;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	if (ptr != NULL)
	{
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = new;
		new->prev = ptr;
		new->n = n;
		new->next = NULL;
	}
	else
	{
		new->next = *head;
		new->n = n;
		new->prev = NULL;
		*head = new;
	}
	return (new);
}
