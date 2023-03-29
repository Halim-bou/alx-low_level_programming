#include "main.h"

/**
 * _strncat - The concatenates two strings
 * @dest: destination of string
 * @src: The source of string
 * @n: the number of bytes
 * Return: A pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i])
	{
		i++;
	}
	while (j < n && src[j] != 0)
	{
		dest[i + j] = src[j];
		j++;
	}
	return (dest);
}
