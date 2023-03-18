#include <stdio.h>
/**
 * main - print alphabets except e and q
 * Return: 0 Always (success)
 */

int main(void)
{
	char alb, E, Q;

	E = 'e';
	Q = 'q';


	for (alb = 'a'; alb <= 'z'; alb++)
	{
		if (alb != E && alb != Q)
			putchar(alb);
	}
	putchar('\n');
	return (0);
}
