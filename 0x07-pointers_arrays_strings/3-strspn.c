#include "main.h"

/**
 * _strspn - gets the length of prefix substring
 * @s: string to check
 * @accept: substring
 *
 * Return: the number of bytes in the initial segment of s.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j = 0;
	unsigned int len = 0;

	while (accept[i])
	{
		j = 0;

		while (s[j] != 32)
		{
			if (accept[i] == s[j])
			{
				len++;
			}
			j++;
		}
		i++;
	}
	return (len);
}
