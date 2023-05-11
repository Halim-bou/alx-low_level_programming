#include "main.h"
#include <stdio.h>

/**
 * check_error - check the errors
 * @file1: first file
 * @file2: second file to be operated
 * @argv: argument value.
 * Return: nothing.
 */
void check_error(int file1, int file2, char *argv[])
{
	if (file1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}
/**
 * main - check the code
 * @argc: argument counetr
 * @argv: argument value.
 *
 * Return: Always (0);
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, cls, flrd, flwrt;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	if (argv[1] == NULL)
		check_error(-1, 0, argv);
	if (argv[2] == NULL)
		check_error(0, -1, argv);
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR |
		       S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	check_error(file_from, file_to, argv);
	flrd = 1024;
	while (flrd == 1024)
	{
		flrd = read(file_from, buf, 1024);
		if (flrd == -1)
			check_error(-1, 0, argv);
		flwrt = write(file_to, buf, flrd);
		if (flwrt == -1)
			check_error(0, -1, argv);
	}
	cls = close(file_from);
	if (cls == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	cls = close(file_to);
	if (cls == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}
