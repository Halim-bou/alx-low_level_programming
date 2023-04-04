#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: first string
 * @needle: substring
 *
 * Return: a char value
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0;

	for (; haystack[i] != '\0'; i++)
	{
		for (; needle[j] != '\0'; j++)
		{
			if (haystack[i +j] != needle[j])
			{
				break;
			}
		}
		if (needle[j] == '\0')
		{
			return (haystack + i);
		}
	}
	return ('\0');
}
