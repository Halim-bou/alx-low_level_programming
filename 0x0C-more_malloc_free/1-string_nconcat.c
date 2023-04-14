#include "main.h"
#include <stdlib.h>

int _strlen(char *str);

/**
 * _strlen - length of string
 * @str: The string
 *
 * Return: ...
 */
int _strlen(char *str)
{
	int i;

	while (str[i])
	{
		i++;
	}
	return (i);
}

/**string_nconcat - string to concatenate
 * @s1: First string
 * @s2: Second string
 * @n: number of byte
 *
 * Return: a pointer of the result of the concatenate
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i = 0, k, j, len1;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = _strlen(s1);

	j = (len1 + n);

	str = malloc(j + 1);

	if (str == NULL)
	{
		return (NULL);
	}
	for (; i < j && s1[i] != '\0'; i++)
	{
		str[i] = s1[i];
	}
	k = 0;
	for (; i < j && s2[k] != '\0'; i++)
	{
		str[i] = s2[k];
		k++;
	}
	str[i] = '\0';
	return (str);
}
