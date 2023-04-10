#include <stdio.h>
#include <stdlib.h>
#include "main.h"
int _atoi(char *s);
/**
 * main - multiplies two numbers
 * @argc: argument counter
 * @argv: array of argument
 * Return: Always (success) .
 */
int main(int argc, char *argv[])
{
	int mull = 0, m = 0, n = 0;

	if (argc > 1 && argc < 4)
	{
		m = _atoi(argv[1]);
		n = _atoi(argv[2]);
		mull = m * n;
		printf("%d\n", mull);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}

/**
 * _atoi - atoi function
 * @s: ..
 *
 * Return: result
 */
int _atoi(char *s)
{
	int i = 0;
	int j = 0;
	int k = 1;
	int n = 0;

	while (s[i])
	{
		if (s[i] == '-')
		{
			k = k * -1;
		}
		for (; s[i] >= '0' && s[i] <= '9'; i++)
		{
			n = 1;
			j = j * 10 + s[i] - '0';
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
