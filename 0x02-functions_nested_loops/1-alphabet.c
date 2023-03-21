#include"main.h"

/**
 * print_alphabet - print alphabet
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
	char i = 'a';
	char j = 'z';

	while (i <= j)
	{
		_putchar(i);
		i++;
	}

	_putchar('\n');
	return (0);
}
