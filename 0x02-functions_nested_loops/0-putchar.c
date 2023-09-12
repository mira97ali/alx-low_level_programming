#include "main.h"
#include <unistd.h>

/**
 * _putchar - Writes a character to standard output (stdout).
 * @c: The character to print
 *
 * Return: On success, 1 is returned.
 *	 On error, -1 is returned, and errno is set accordingly.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

