#include "main.h"

/**
 * string_nconcat - concatinate two strings
 * @s1: The first string
 * @s2: The second string
 * @n: nomber of characters to concatenate
 *
 * Return: a pointer of the new allocated memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new;
	unsigned int i = 0, j = 0, len = 0;
	unsigned int size_new;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len] != '\0')
		len++;
	size_new = ((len + n) * sizeof(*new));
	new = malloc(size_new + 1);
	if (new == NULL)
		return (NULL);
	while (i < size_new && s1[i] != '\0')
	{
		new[i] = s1[i];
		i++;
	}
	while (i < size_new && s2[j] != '\0')
	{
		new[i] = s2[j];
		j++;
		i++;
	}
	new[i] = '\0';
	return (new);
}
