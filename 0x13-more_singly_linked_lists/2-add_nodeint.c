#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - add a new node at the beginning of linked list
 * @head: a pointer to the the pointer of the first node
 * @h: a pointer to the first node
 *
 * Return: the address of the new linked list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *n_node;

	n_node = malloc(sizeof(listint_t));
	if (n_node == NULL)
		return (NULL);
	n_node->n = n;
	n_node->next= *head;
	*head = n_node;
	return (n_node);
}
