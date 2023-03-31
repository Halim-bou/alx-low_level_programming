#include "main.h"

/**
 * cap_string - capitalize all waorld of string
 * @str: string to capiltalize
 *
 * Return: Always restulting of str
 */
char *cap_string(char *str)
{
	int i = 0, j;
	int k = 0;
	char cp[] = {32, '\t', '\n', 44, ';', 46, '!', '?', '"', '(', ')', '{', '}'};

	while (cp[k])
	{
		k++;
	}

	while (str[i])
	{
		j = 0;

		while (j < k)
		{
			if ((i == 0 || str[i - 1] == cp[j]) && (str[i] >= 97 && str[i] <= 122))
				str[i] -= 32;

			j++;
		}

		i++;
	}

	return (str);
}
