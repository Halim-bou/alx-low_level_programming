#include "main.h"
#include <stdlib.h>

int length_word(char *str);
int word_c(char *str);

/**
 * length_word - ....
 * @str: the string to be operated
 *
 * Return: length of word
 */
int length_word(char *str)
{
	int i = 0, len = 0;

	while ((*(str + i)) && (*(str + i)) != ' ')
	{
		i++;
		len++;
	}
	return (len);
}

/**
 * word_c - count how many words int the string
 * @str: The sting to be operated
 *
 * Return: N of words.
 */
int word_c(char *str)
{
	int i = 0, len = 0;
	int wd = 0;

	for (; (*(str + i)); i++)
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		if (*(str + i) != ' ')
		{
			wd++;
			i += length_word(str + i);
		}
	}
	return (wd);
}

/**
 * strtow - function that splits a string int words
 * @str: the string to be operated
 *
 * Return: NULL if function or str is empty or str is NULL
 * and a pointer to an array of strings words if will success
 */
char **strtow(char *str)
{
	char **strs;
	int i = 0, wd, lett, w = 0, l = 0;

	if (str[0] == '\0' || str == NULL)
		return (NULL);
	wd = word_c(str);
	if (wd == 0)
		return (NULL);

	strs = malloc(sizeof(char *) * (wd + 1));

	if (strs == NULL)
		return (NULL);
	for (; w < wd; w++)
	{
		while (str[i] == ' ')
			i++;
		
		lett = length_word(str + i);
		strs[w] = malloc(sizeof(char) * (lett + 1));
		if (strs[w] == NULL)
		{
			for (; w >= 0; w--)
			{
				free(strs[w]);
			}
			free(strs);
			return (NULL);
		}
		for (l = 0; l < lett; l++)
		{
			strs[w][l] = str[i++];
		}
		strs[w][l] = '\0';
	}
	strs[w] = NULL;
	return (strs);
}
