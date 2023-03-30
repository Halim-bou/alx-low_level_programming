#include "main.h"

/**
 * cap_string - capitalize all waorld of string
 * @str: string to capiltalize
 *
 * Return: Always restulting of str
 */
char *cap_string(char *str)
{
	int i ,j = 0;

	while (str[j] != '\0')
	{
		j++;
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == '\n' || str[i] == '\t' || str [i] == ' ' || str[i] == ',' || str[i] == ';' || str[i] == '.' || str[i] == '!' || str[i] == '?' || str[i] == '"' || str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}')
		{
			if (str[i + 1] == str[j] || str[i + 1] == ' ' || str[i + 1] == '\n')
			{
				continue;
			}
			else if (str[i +1] >= 65 && str[i + 1] <= 96)
			{
				continue;
			}
			else
			{
				str[i + 1] = str[i + 1] -  32;
			}
		}
	}
	return (str);
}
