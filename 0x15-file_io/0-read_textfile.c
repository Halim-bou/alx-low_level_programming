#include "main.h"

/**
 * read_textfile - read a text file and prints it
 * to the POSIX standard output
 * @filename: The file name to be read
 * @letters: number of letters it should read and print
 *
 * Return: The actual number of letters it could
 * read and print, or 0 if can not read and if it's NULL
 * and if write fails.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer = malloc(sizeof(char) * letters);
	size_t wrt, red;
	int fl;

	if (!buffer)
		return (0);
	if (!filename)
		return (0);
	fl = open(filename, O_RDONLY);
	if (fl == -1)
		return (0);
	red = read(fl, buffer, letters);
	wrt = write(STDOUT_FILENO, buffer, red);

	close(fl);
	free(buffer);

	return (wrt);
}
