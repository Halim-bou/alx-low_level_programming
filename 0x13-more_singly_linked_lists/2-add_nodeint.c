#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - add a new node at the beginning of a list
 * @head: pointer to pointer to the first node
 * @n: data of the node
 *
 * Return: the address of the new element,
 * or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	if (head != NULL)
	{
		new_node = malloc(sizeof(listint_t));
		if (new_node == NULL)
			return (NULL);
		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	else
		return (NULL);
}
