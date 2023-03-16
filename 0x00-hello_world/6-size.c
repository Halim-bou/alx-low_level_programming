#include <stdio.h>

/**
 * main - size of various types
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	int i;
	long int l;
	long long int o;
	float f;

	printf("Size of a char: %lu.\n", (unsigned)sizeof(c));
	printf("Size of an int: %lu.\n", (unsigned)sizeof(i));
	printf("Size of a long int: %lu.\n", (unsigned)sizeof(l));
	printf("Size of a long long int: %lu.\n", (unsigned)sizeof(o));
	printf("Size of a float: %lu.\n", (unsigned)sizeof(f);
	return (0);
}
