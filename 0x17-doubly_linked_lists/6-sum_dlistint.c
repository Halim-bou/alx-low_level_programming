#include "lists.h"
#include <stdlib.h>

/**
 * sum_dlistint - sum of all data in doubly linked list
 * @head: pointer to first node
 * Return: the sum or 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head->prev != NULL)
		head = head->prev;
	ptr = head;
	while (ptr->next != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	sum += ptr->n;
	return (sum);
}
