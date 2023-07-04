#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint - function that print the integer from linked list
 * @h: pointer to the first node
 *
 * Return: Number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t counter = 0;

	while (h)
	{
		printf("%d\n", h->n);
		counter++;
		h = h->next;
	}
	return (counter);
}
