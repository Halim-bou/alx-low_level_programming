#include "main.h"
#include <stdlib.h>

char *_memcpy(char *dest, char *src, unsigned int n);
int _strlen(char *s);

/**
 * _strlen - returns the length of a string
 * @s: the string to length
 * Return: the length .
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * _memcpy - copies memory area
 * @dest: ..
 * @src: ....
 * @n: ...
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

/**
 * str_concat - concat two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: the result of concat two string
 */
char *str_concat(char *s1, char *s2)
{
	char *r;
	int len1 = 0;
	int len2 = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	r = malloc((len1 + len2 + 1) * (sizeof(char)));
	if (r == NULL)
	{
		return (NULL);
	}
	_memcpy(r, s1, len1);
	_memcpy(r + len1, s2, len2 + 1);
	return (r);
}
