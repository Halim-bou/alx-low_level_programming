#include<stdio.h>
/**
 * main - alphabet using putchar
 * Return: 0 Always (success)
 */
int main(void)
{
	char start = 'a';
	char end = 'z';


	char ch = start++;

	while (ch <= end)
	{
		putchar(ch);
		ch++;
	}
	return (0);
}
