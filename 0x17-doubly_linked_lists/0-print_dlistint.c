#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dlistint - fuction that print all data in the doublu linked list
 * @h: head of doubly linked list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int num = 0;
	const dlistint_t *ptr;

	ptr = h;
	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		num += 1;
	}
	return (num);
}
