#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of
 * a list_t list
 * @head: The linked list
 * @str: The string to add
 *
 * Return: The adress of the new list or NUUL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	if (str != NULL && head != NULL)
	{
		temp = malloc(sizeof(list_t));
		if (temp != NULL)
		{
			temp->str = strdup(str);
			temp->len = str_len(str);
			temp->next = *head;
			*head = temp;
			return (temp);
		}
		else
			return (NULL);
	}
	return (0);
}

/**
 * str_len - length the string
 * @str: The string to length
 *
 * Return: the length of the string.
 */
int str_len(char *str)
{
	int i = 0;

	while (*str)
	{
		i++;
		str++;
	}
	return (i);
}
