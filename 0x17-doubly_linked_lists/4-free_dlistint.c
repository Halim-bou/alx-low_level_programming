#include "lists.h"
#include <stdlib.h>
/**
 * free_dlistint - function that freed a struct doubly linked list
 * @head: poiter to the first doubly node
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr, *current;

	current = head;
	while (current != NULL)
	{
		ptr = current;
		current = current->next;
		free(ptr);
	}
}
