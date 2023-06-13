#include "main.h"

/**
 * _strdup - function to duplicate the string
 * @str: the string duplicated
 *
 * Return: NULL if failed to allocate memory
 * or a pointer to the duplicated string.
 */
char *_strdup(char *str)
{
	char *dup, *new;
	int i = 0, len = 0;

	new = str;
	if (str == NULL)
		return (NULL);
	while (*str)
	{
		len++;
		str++;
	}
	str = new;
	dup = malloc(sizeof(char) * (len + 1));
	new = dup;
	if (dup == NULL)
		return (NULL);
	while (i < len)
	{
		dup[i] = *str;
		i++;
		str++;
	}
	dup[i] = '\0';
	return (new);
}
