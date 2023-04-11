#include <stdio.h>
#include <stdlib.h>

/**
 * main - give n of coins for evry centes
 * @argc: argumment count
 * @argv: argument value
 *
 * Return: Always success.
 */
int main(int argc, char *argv[])
{
	int cn, p = 0;

	if (argc <= 1 || argc > 2)
	{
		printf("Error\n");
		return (0);
	}
	cn = atoi(argv[1]);
	while (cn > 0)
	{
		if (cn >= 25)
		{
			cn -= 25;
			p += 1;
		}
		else if (cn >= 10)
		{
			cn -= 10;
			p += 1;
		}
		else if (cn >= 5)
		{
			cn -= 5;
			p += 1;
		}
		else if (cn >= 2)
		{
			cn -= 2;
			p += 1;
		}
		else if (cn >= 1)
		{
			cn -= 1;
			p += 1;
		}
	}
	printf("%d\n", p);
	return (0);
}
