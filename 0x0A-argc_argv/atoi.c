#include "main.h"

/**
 * _atoi - atoi function
 * @s: string
 *
 * Return: Always (success)
 */
int _atoi(char *s)
{
	int i = 0;
	unsigned int j = 0;
	int k = 1;
	int n = 0;

	while (s[i])
	{
		if (s[i] = '-')
		{
			k = k * -1;
		}
		for (s[i] >= '0' && s[i] <= '9')
		{
			j = j * 10 + s[i] - '0';
			n = 1;
			i++;
		}
		if (n == 1)
		{
			break;
		}
		i++;
	}
	j = j * k;
	return (j);
}
