#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - free all nodes in a linked list
 * @head: the pointer of the first node
 *
 * Return: Nothing.
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
