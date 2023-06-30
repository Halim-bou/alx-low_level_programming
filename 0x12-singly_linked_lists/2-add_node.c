#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - add new node att the beginning of list
 * @head: the head node
 * @str: the string to add
 * Return: The address of the list or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	unsigned int i = 0;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	temp->str = strdup(str);
	while (str[i])
		i++;
	temp->len = i;
	temp->next = *head;
	*head = temp;
	return (*head);
}
