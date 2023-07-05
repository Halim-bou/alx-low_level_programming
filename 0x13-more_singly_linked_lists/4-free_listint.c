#include "lists.h"
#include <stdlib.h>

/**
 * free_listint -function that free the listint_t
 * @head: pointer to the first node
 * Return: Nothing.
 */
void free_listint(listint_t *head)
{
	listint_t *free_node;

	while (head)
	{
		free_node = head;
		head = head->next;
		free(free_node);
	}
}
