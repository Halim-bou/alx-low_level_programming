#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: is the number of time the charchter _ should be printed
 * Return: Always (success)
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		i = 0;
		while (i < n)
		{
			_putchar('_');
			i++;
		}
		_putchar('\n');
	}
}
