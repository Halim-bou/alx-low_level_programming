#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: Destination of string
 * @src: Source string
 * Return: A pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i])
	{
		i++;
	}
	while (src[j] != 0)
	{
		dest[i + j] = src[j];
		j++;
	}
	return (dest);
}
