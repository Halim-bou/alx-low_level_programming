#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - add all integers from linked lists
 * @head: pointer to the frst node
 * Return: the sum of all data or 0 is mo data to calculat
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
