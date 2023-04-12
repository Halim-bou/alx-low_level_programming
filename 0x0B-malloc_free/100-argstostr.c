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
	int i = 0, j = 0, k = 0;
	int l = 0;

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
	ar = malloc(l * sizeof(char));
	if (ar == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			ar[k] = av[i][j];
			k++;
			j++;
		}
		ar[k] = '\n';
		k++;
		i++;
	}
	return (ar);
}
