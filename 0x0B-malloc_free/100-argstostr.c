#include "main.h"

/**
 * argstostr - A function that concatenates all
 * arguments of your program
 * @ac: number of arguments
 * @av: array containing arguments
 * Return: A pointer to string that containing all arguments
 * or NULL if ac == 0, if av == NULL, or upon failure
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, k, len;

	if (ac <= 0 || av == NULL)
		return (NULL);
	i = len = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			len++;
			j++;
		}
		len++;
		i++;
	}
	len++;
	str = malloc(len * sizeof(char));
	if (str == NULL)
		return (NULL);
	i = k = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != 0)
		{
			str[k] = av[i][j];
			k++;
			j++;
		}
		str[k] = '\n';
		k++;
		i++;
	}
	return (str);
}
