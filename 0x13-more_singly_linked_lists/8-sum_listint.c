#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - sum of all data in linked list
 * @head: a pointer to the first node
 *
 * Return: the sum or 0 if the list empty.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head != NULL)
	{
		while (head != NULL)
		{
			sum += head->n;
			head = head->next;
		}
		return (sum);
	}
	return (0);
}
