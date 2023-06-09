#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @str: string to encodes
 * Return: the resulting of str
 */
char *rot13(char *str)
{
	int i = 0;

	while (str[i])
	{
		while ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
		{
			if ((str[i] >= 'a' && str[i] <= 'm') || (str[i] >= 'A' && str[i] <= 'M'))
			{
				str[i] = str[i] + 13;
				break;
			}
			str[i] = str[i] - 13;
			break;
		}
		i++;
	}
	return (str);
}

