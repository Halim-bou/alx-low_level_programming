#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strlen - length of string
 * @str: the string
 *
 * Return: the length
 */
int _strlen(const char *str)
{
	int i = 0;

	while (str)
	{
		str++;
		i++;
	}
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

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	temp->str = strdup(str);
	temp->len = _strlen(str);
	temp->next = *head;
	*head = temp;
	return (*head);
}
