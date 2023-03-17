#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 1 (Success)
 */
int main(void)
{
	FILE *fp;
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fp = fopen("quote.c", "w");
	fwrite(str, 1, sizeof(str), fp);
	fclose(fp);
	return (1);
}
