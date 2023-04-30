#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - add a new node at the end of a list
 * @head: a pointer to pointer to the linked list
 * @n: The data of the node
 *
 * Return: the address of the new element,
 * or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *ptr;

	if (head != NULL)
	{
		new_node = malloc(sizeof(listint_t));
		if (new_node == NULL)
			return (NULL);

		new_node->n = n;
		new_node->next = NULL;

		if (*head == NULL)
		{
			*head = new_node;
			return (*head);
		}
		else
		{
			ptr = *head;
			while (ptr->next != NULL)
			{
				ptr = ptr->next;
			}
			ptr->next = new_node;
			return (ptr);
		}
	}

	return (NULL);
}
