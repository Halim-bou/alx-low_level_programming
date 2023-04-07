#include "main.h"

int _compare(char *s, int i, int j);
int str_len(char *s);

/**
 * str_len - length the string
 * @s : string to length
 *
 * Return: the length .
 */
int str_len(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + str_len(s + 1));
}

/**
 * is_palindrome - return 0 or 1 depends if the string is palindrome
 * @s: string to be checked
 *
 * Return: 0 for fauls and 1 if true.
 */
int is_palindrome(char *s)
{
	int len = str_len(s);

	return (_compare(s, 0, len - 1));
}

/**
 * _compare - check if string is palindrome
 * @s: string to be checked
 * @i: start of string
 * @j: end of string
 * Return: 0 if string is not palindrome ou 1 for else
 */
int _compare(char *s, int i, int j)
{
	if (i >= j)
	{
		return (1);
	}
	if (s[i] == s[j])
	{
		return (_compare(s, i + 1, j - 1));
	}
	else
	{
		return (0);
	}
}

