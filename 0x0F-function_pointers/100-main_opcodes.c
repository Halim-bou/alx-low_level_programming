#include <stdio.h>
#include <stdlib.h>

/**
 * main - chck the opcodes
 * @argc: arguments count
 * @argv: arguments value
 *
 * Return : Always 0 .
 */
int main(int argc, char *argv[])
{
	char *d;
	int i = 0;
	int bts;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bts = atoi(argv[1]);
	if (bts < 0)
	{
		ptintf("Error\n");
		exit(2);
	}
	d = (char *)&main;
	while (i < bts)
	{
		printf("%02x", d[i] & 0xFF);
		if (i != bts - 1)
			printf(" ");
		i++;
	}

	printf("\n");
	return (0);
}
