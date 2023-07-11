#include "main.h"

/**
 * read_textfile - read text file and print the content to the stdout
 * @filename: name of the file to read from
 * @letters: The number of chars to read
 *
 * Return: number of chars to read or 0 if it failed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file = 0, fl_read;
	char *buff;

	buff = malloc(sizeo(char) * letters);
	if (buff == NULL || filename == NULL)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	fl_read = read(file, buff, letters);
	if (fl_read == -1)
		return (0);
	if (write(STDOUT_FILENO, buff,fl_read) == -1)
		return (0);
	if (close(file) == -1)
		return (0);
	free(buff);
	return (fl_read);
}
