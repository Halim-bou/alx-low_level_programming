#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - base_16 project
 * Return: 0 Always (success)
 */
int main(void)
{
	int alb;
	int num;

	for (num = '0'; num <= '9'; num++)
		putchar(num);
	for (alb = 'a'; alb <= 'f'; alb++)
		putchar(alb);
	putchar('\n');

	return (0);
}
