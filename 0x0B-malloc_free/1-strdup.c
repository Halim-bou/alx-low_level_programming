#include "main.h"
#include <stdlib.h>

/**
 * _strdup - a pointer to duplicate the string
 * @str: string pointer
 *
 * Return: Apointer to duplicated string
 */
char *_strdup(char *str)
{
	int i = 1, j;
	char *dp;

	if (str == 0)
	{
		return (NULL);
	}
	while (str[i])
	{
		i++;
	}

	dp = malloc((sizeof(char) * i) + 1);
	if (dp == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < i; j++)
	{
		dp[j] = str[j];
	}
	return (dp);
}
