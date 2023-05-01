#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - free all nodes in linked list
 * @head: a pointer to pointer to the first node
 *
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *temp, *ptr;

	while (head != NULL)
	{
		ptr = *head;
		while (ptr != NULL)
		{
			temp = ptr;
			ptr = ptr->next;
			free(temp);
		}
		*head = NULL;
	}
}
