#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - function that add a new node att the end of linked list
 * @head: a pointer to the pointer to the first node
 * @n: number to add att integer node
 *
 * Return: The address of the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *n_node;
	listint_t *node;

	node = *head;
	n_node = malloc(sizeof(listint_t));
	if (n_node == NULL)
		return (NULL);
	n_node->n = n;
	n_node->next = NULL;
	while (node != NULL && node->next != NULL)
		node = node->next;
	if (node != NULL)
		node->next = n_node;
	else
		*head = n_node;
	return (n_node);
}
