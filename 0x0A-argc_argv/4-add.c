#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - add argument numbers
 * @argc: argument counter
 * @argv: argument value
 * Return: ..
 */
int main(int argc, char *argv[])
{
	int i;
	char *one;
	unsigned int j;
	unsigned int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			one = argv[i];
			while (j < strlen(one))
			{
				if (one[j] < '0' || one[j] > '9')
				{
					printf("Error\n");
					return (1);
				}
				j++;
			}
			sum = sum + atoi(one);
			one++;
		}
			printf("%d\n", sum);
	}
	return (0);
}
