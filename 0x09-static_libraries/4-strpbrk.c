#include "main.h"

/**
 * _strpbrk - searches a string for any of set of bytes
 * @s: string to be checked
 * @accept: string of matches charcters
 *
 * Return: a pointer to the the byte in s or NULL.
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;

	while (s[i] != '\0')
	{
		j = 0;

		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				s = s + i;
				return (s);
			}
			j++;
		}
		i++;
	}
	return ('\0');
}
