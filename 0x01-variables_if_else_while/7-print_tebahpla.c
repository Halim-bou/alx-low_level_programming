#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - print reversed alphabet
 * Return: 0 Always(success)
 */
int main(void)
{
	char alb;

	for (alb = 'z'; alb >= 'a'; alb--)
	{
		putchar(alb);
	}
	putchar('\n');
	return (0);
}
