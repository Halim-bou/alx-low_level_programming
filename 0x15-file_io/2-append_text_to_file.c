#include "main.h"

/**
 * append_text_to_file - function that append text at the end of a file
 * @filename: Name of the file
 * @text_content: content to append
 * Return: 1 on success or -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, wrote;
	int len = 0;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;
		wrote = write(file, text_content, len);
		if (wrote == -1)
			return (-1);
	}
	close(file);
	return (1);
}
