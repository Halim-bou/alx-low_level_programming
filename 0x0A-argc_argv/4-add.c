#include "main.h"
#include <ctype.h>
/**
 * main - check the code
 * @argc: argument counter
 * @argv: argument value
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int counter = 1;
	int i = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	while (counter < argc)
	{
		while (argv[counter][i] != '\0')
		{
			if (!(isdigit(argv[counter][i])))
			{
				printf("Error\n");
				return (1);
			}
			i++;
		}
		sum = sum + atoi(argv[counter]);
		counter++;
	}
	printf("%d\n", sum);
	return (0);
}
