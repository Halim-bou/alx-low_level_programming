#include "main.h"

/**
 * leet - encodes a string int 1337 .
 * @str: string to encodes.
 * Return: the resulting of str
 */
char *leet(char *str)
{
	int i = 0, j = 0, k = 5;
	int ch[5] = {'A', 'E', 'O', 'T', 'L'};
	int nm[5] = {'4', '3', '0', '7', '1'};

	while (str[i])
	{
		j = 0;

		while (j < k)
		{
			if (str[i] == ch[j] || str[i] - 32 == ch[j])
			{
				str[i] = nm[j];
			}
			j++;
		}
		i++;
	}
	return (str);
}

