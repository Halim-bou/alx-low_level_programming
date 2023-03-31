#include "main.h"

/**
 * cap_string - capitalize all waorld of string
 * @str: string to capiltalize
 *
 * Return: Always restulting of str
 */
char *cap_string(char *str)
{
	int i = 0;

	while (str[i])
	{
		while (!(str[i] >= 65 && str[i] <= 96))
		{
			i++;
			if (str[i] == '\n' ||
					str[i - 1] == '\t' ||
					str[i - 1] == ' ' ||
					str[i - 1] == ',' ||
					str[i - 1] == ';' ||
					str[i - 1] == '.' ||
					str[i - 1] == '!' ||
					str[i - 1] == '?' ||
					str[i - 1] == '"' ||
					str[i - 1] == '(' ||
					str[i - 1] == ')' ||
					str[i - 1] == '{' ||
					str[i - 1] == '}' ||
					i == 0)
			{
				if ( str[i] == ' ' || str[i] == '\n')
				{
					continue;
				}
				else if (str[i] >= 65 && str[i] <= 96)
				{
					continue;
				}
				else
				{
					str[i] = str[i] -  32;
				}
			}
		}
		i++;
	}
	return (str);
}
