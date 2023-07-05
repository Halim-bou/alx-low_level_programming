#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - function to delete the hed of linked list
 * @head: a pointer to the pointer to the first node
 * Return: the value of the node deleted
 */
int pop_listint(listint_t **head)
{
	listint_t *node;
	int val;

	node = *head;
	if (node == NULL)
		return (0);
	val = node->n;
	*head = node->next;
	free(node);
	return (val);
}
