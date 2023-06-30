#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strlen - length of string
 * @str: the string
 *
 * Retunr: the length
 */
int _strlen(const char *str)
{
	int i = 0;

	for (; str != NULL; i++)
		;
	return (i);
}

/**
 * add_node - add new node att the beginning of list
 * @head: the head node
 * @str: the string to add
 * Return: The address of the list or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	if (head != NULL && str != NULL)
	{
		temp = malloc(sizeof(list_t));
		if (temp == NULL)
			return (NULL);
		temp->str = strdup(str);
		temp->len = _strlen(str);
		temp->next = *head;
		*head = temp;
		return (temp);
	}
	return (0);
}
