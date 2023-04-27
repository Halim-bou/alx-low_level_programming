#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a new node at the end of list
 * @head: The linked list
 * @str: The string to add
 *
 * Return: the address of the element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str);
{
	list_t *temp;
	list_t *nlist;

	if (str != NULL)
	{
		nlist = malloc(sizeof(list_t));

		if (nlist == NULL)
			return (NULL);

		nlist->str = strdup(str);
		nlist->len = str_len(str);
		nlist->next = NULL;

		if (*head == NULL)
		{
			*head = nlist;
			return (*head);
		}
		else
		{
			temp = *head;
			while (temp->next)
				temp = temp->next;
			temp->next = nlist;
			return (temp);
		}
	}
	return (NULL);
}

/**
 * str_len - length the string
 * @str:  the string
 *
 * Return: the length of the string
 */
int str_len(const char *str)
{
	int i = 0;

	while (*str)
	{
		i++;
		str++;
	}
	return (i);
}
