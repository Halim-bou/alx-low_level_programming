#include "main.h"
int _strlen(char *str);
/**
 * create_file- function that creat a file
 * @filename: the file name
 * @text_content: the content of the file created
 *
 * Return: 1 on success or -1 on failure and if filename is NULL
 */
int create_file(const char *filename, char *text_content)
{
	int fl;


	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	fl = open(filename, O_RDWR | O_CREAT | O_EXCL, 600);
	if (!fl)
		return (-1);
	write(fl, text_content, _strlen(text_content));
	close(fl);
	return (1);
}

/**
 * _strlen - ...
 * @str: ....
 * Return: ...
 */
int _strlen(char *str)
{
	int i = 0;

	for (; *str != '\0'; i++)
		str++;
	return (i);
}
