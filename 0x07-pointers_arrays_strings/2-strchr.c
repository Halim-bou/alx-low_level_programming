#include"main.h"

/**
 * _strchr - locates a character in a string
 * @s: string to be located
 * @c: character to be located
 *
 * Return: Always (success)
 */
char *_strchr(char *s, char c)
{
	int i = 0, j = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	for (; j <= i; j++)
	{
		if (s[j] == c)
		{
			s += j;
			return (s);
		}
	}

	return ('\0');
}
