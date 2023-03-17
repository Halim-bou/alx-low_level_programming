#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 1 (Success)
 */
int main(void)
{
	FILE *fp;
	char str[] = "This is tutorialspoint.com";

	fp = fopen("quote.c", "w");
	fwrite(str, 1, sizeof(str), fp);
	fclose(fp);
	return (1);
}
