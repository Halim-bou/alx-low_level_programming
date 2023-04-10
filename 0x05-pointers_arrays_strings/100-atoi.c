#include "main.h"

/**
 * _atoi - function atoi
 * @s: string to convert
 *
 * Return: Always (success)
 */
int _atoi(char *s)
{
	int i = 0;
	int j = 0;
	int k = 1;
	unsigned int n = 0;

	while (s[i])
	{
	if (s[0] == '-')
	{
		k = -1;
		i++;
	}
	for (; s[i] >= '0' && s[i] <= '9'; i++)
	{
		j = j * 10 + s[i] - '0';
		n = 1;
	}
	if (n == 1)
	{
		break;
	}
	i++;
	}
	return (k * j);
}
