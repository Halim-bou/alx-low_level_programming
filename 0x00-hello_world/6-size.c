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
printf("Size of a char: %lu byte(s)\n", (long unsigned int)sizeof(c));
printf("Size of an int: %lu byte(s)\n", (long unsigned int)sizeof(i));
printf("Size of a long int: %lu byte(s)\n", (long unsigned int)sizeof(l));
printf("Size of a long long int: %lu byte(s)\n", (long unsigned int)sizeof(o));
printf("Size of a float: %lu byte(s)\n", (long unsigned int)sizeof(f);
	return (0);
}
