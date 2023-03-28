#include "main.h"

/**
 * rev_string - reverses string
 * @s: the string to reverse
 * Return:Always (success)
 */

void rev_string(char *s)
{
	int i, j, k;
	char a;

	for (i = 0; s[i] != '\0'; i++)

	j = 0;
	k = i / 2;

	while (k--)
	{
		a = s[i - j - 1];
		s[i - j - 1] = s[j];
		s[j] = a;
		j++;
	}
}
