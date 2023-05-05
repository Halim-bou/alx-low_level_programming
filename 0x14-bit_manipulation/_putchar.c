#include <unistd.h>

/**
 * _putchar - write the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * ON error, -1 is returned, and errno is set appropiately.
 */
int _putchar(charc)
{
	return (write(1, &c, 1));
}
