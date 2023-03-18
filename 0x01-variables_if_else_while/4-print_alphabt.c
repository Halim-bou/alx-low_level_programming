#include <stdio.h>
/**
 * main - print alphabets except e and q
 * Return: 0 Always (success)
 */

int main(void)
{
	char(alb, e, q);
	e = 'e';
	q = 'q';


	for (alb = 'a'; alb <= 'z'; alb++)
	{
		if (alb != e && alb != q)
			putchar(alb);
	}
	putchar('\n');
	return (0);
}
