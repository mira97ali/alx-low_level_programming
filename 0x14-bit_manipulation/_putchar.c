#include <unistd.h>

/**
* _putchar - Writes the character to the standard output.
* @character: The character to be written.
*
* Return: On success, it returns 1.
* On error, -1 is returned, and errno is set accordingly.
*
* Author: amira
*/

int _putchar(char character)
{
	return (write(1, &character, 1));
}
