#include "main.h"

/**
 * _strcmp - comper two string
 * @s1: First string
 * @s2: Second string
 * Return: Always (success)
 */
int _strcmp(char *s1, char *s2)
{
	int a = 0, b = 0, c = 0, d = 0, e;

	while (s1[a] != '\0')
	{
		a++;
	}


	while (s2[b] != '\0')
	{
		b++;
	}

	if (a < b)
	{
		e = a;
	}
	else
	{
		e = b;
	}

	while (c <= e)
	{
		if (s1[c] == s2[c])
		{
			c++;
			continue;
		}
		else
		{
			d = s1[c] - s2[c];
			break;
		}

		c++;
	}

	return (d);
}
