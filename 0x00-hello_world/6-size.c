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
	long int li;
	long long int lli;
	float f;

	printf("Size of a char: %lu.\n", (unsigned)sizeof(c));
	printf("Size of an int: %lu.\n", (unsigned)sizeof(i));
	printf("Size of a long int: %lu.\n", (unsigned)sizeof(li));
	printf("Size of a long long int: %lu.\n", (unsigned)sizeof(lli));
	printf("Size of a float: %lu.\n", (unsigned)sizeof(f);
	return (0);
}
