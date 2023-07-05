#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - free all nodes and set head to NULL
 * @head: a pointer to pointer tothe first node
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *free_node;
	listint_t *node;

	if (head != NULL)
	{
		node = *head;
		while (free_node)
		{
			free_node = node;
			node = node->next;
			free(free_node);
		}
		*head = NULL;
	}
}
