#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/**
 * main - print combinations of 2 digits
 * Return: 0 Always(success)
 */
int main(void)
{
	int i, j;

	i = j = '0';

	for (i = '0'; i < '9'; i++)
	{
		for (j = i; j <= '9'; j++)
		{
		putchar(i);
		putchar(j);
		{
		if (i != '8' || j != '9')
		putchar(',');
		putchar(' ');
		}
		}
	}
	putchar('\n');

	return (0);
}

