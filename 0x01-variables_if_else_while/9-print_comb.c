#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - all possible combinations of single-digit numbers.
 * Return: 0 Always (success)
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
		if (i != 9)
		{
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
