#include "main.h"

/**
 * str_concat - function that concatenates two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: NULL on failure or a pointer that contains
 * the two strings.
 */
char *str_concat(char *s1, char *s2)
{
	char *cop, *new1, *new2;
	int len1 = 0, len2 = 0, i = 0;

	new1 = s1;
	new2 = s2;
	if (s1 == NULL)
		s1 = "";
	while (*s1)
	{
		len1++;
		s1++;
	}
	s1 = new1;
	if (s2 == NULL)
		s2 = "";
	while (*s2)
	{
		len2++;
		s2++;
	}
	s2 = new2;
	cop = malloc(sizeof(char) * (len1 + len2 + 1));
	new1 = cop;
	if (cop == NULL)
		return (NULL);
	for (; i < (len1 + len2); i++)
	{
		if (i < len1)
		{
			cop[i] = *s1;
			s1++;
		}
		else
		{
			cop[i] = *s2;
			s2++;
		}
	}
	cop[i] = '\0';
	return (new1);
}
