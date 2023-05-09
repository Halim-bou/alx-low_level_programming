#include "main.h"

int _strlen(char *str);
/**
 * append_text_to_file - append text at the end of a file
 * @filename: The file name
 * @text_content: The content text to add to the end of the file
 *
 * Return: 1 on success, -1 on failure ou if filename is NULL.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fl, wrt;

	if (filename == NULL)
		return (-1);
	if (!filename && text_content == NULL)
		return (-1);
	fl = open(filename, O_RDWR | O_APPEND);
	if (fl == -1)
		return (-1);
	wrt = write(fl, text_content, _strlen(text_content));
	if (wrt == -1)
		return (-1);
	close(fl);
	return (1);
}

/**
 * _strlen - ...
 * @str: ...
 * Return: ...
 */
int _strlen(char *str)
{
	int i;

	for (i = 0; *str != '\0'; i++)
		str++;
	return (i);
}
