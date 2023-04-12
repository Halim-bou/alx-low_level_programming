#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - concatenates all arguments of program
 * @ac: argument count
 * @av: argument ..
 * Return: a pointer to a new string or NULL.
 */
char *argstostr(int ac, char **av)
{
	char *ar;
	unsigned int i = 0, j = 0, k = 0;
	unsigned int l = 0;

	if ((ac == 0) || (av == NULL))
	{
		return (NULL);
	}
	while (i < ac)
	{
		while (av[i][j])
		{
			j++;
			l++;
		}
		l++;
		i++;
	}
	l++;
	ar = (char *)malloc(l * sizeof(char));
	if (ar == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			ar[k] = av[i][j];
			k++;
		}
		ar[k] = '\n';
		k++;
	}
	return (ar);
}
