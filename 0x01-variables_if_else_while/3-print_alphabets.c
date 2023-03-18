#include <stdio.h>
/**
 * main -prints the alphabet in lowercase, and then in uppercase.
 * Return: 0 Always (success)
 */
int main(void)
{
	char start = 'a';
	char end = 'z';
	char START = 'A';
	char END = 'Z';

	char ch = start;
	char CH = START;

	while (ch <= end)
	{
		putchar(ch);
		ch++;
	}
	while (CH <= END)
	{
		putchar(CH);
		CH++;
	}
	{
		putchar('\n');
	}
	return (0);
}
