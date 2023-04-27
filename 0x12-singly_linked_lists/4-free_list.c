#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a list_t list
 * @head:  a pointer to the first node in list
 *
 * Return: Nothing.
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
	free(head);
}
