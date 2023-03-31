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

	for(; str[i] != '\0'; i++)
	{
		if (str[i - 1] == '\n' ||
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
				str[i - 1] == '}')
		{
			if ( str[i] == ' ' ||
					(str[i] >= 'A' && str[i] <= 'Z')||
					str[i] == '\n')
			{
				continue;
			}
			else
			{
				str[i] -= 32;
			}
		}
	}
	return (str);
}
