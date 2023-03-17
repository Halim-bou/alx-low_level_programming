#include <unistd.h>

/**
 * main - print the text followed with anew line
 * Return: Always 1 (Success)
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
	;
}
