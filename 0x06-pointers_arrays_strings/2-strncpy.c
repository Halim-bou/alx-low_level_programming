#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination of value
 * @src: source of value
 * @n: number of character to copy
 * Return: A pointer to the resulting of string destination
 */
char *_strncpy(char *dest, char *src, int n)
{
	int k = 0, j = 0;

	while (src[k])
	{
		k++;
	}
	while (j < n && src[j])
	{
		dest[j] = src[j];
		j++;
	}

	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}
