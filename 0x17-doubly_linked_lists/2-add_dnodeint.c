#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - add new node at the biginning of doubly linked list
 * @head: pointer to pointer to the first node
 * @n: data of the new node
 * Return: The address of the first node or NULL if it fieled
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;
	dlistint_t *ptr;

	ptr = *head;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	if (ptr != NULL)
	{
		while (ptr->prev != NULL)
			ptr = ptr->prev;
		ptr->prev = new;
	}
	new->next = *head;
	new->n = n;
	new->prev = NULL;
	*head = new;
	return (new);
}
