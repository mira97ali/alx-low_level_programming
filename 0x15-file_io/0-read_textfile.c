#include "main.h"
#include <stdlib.h>

/**
* read_textfile - Reads a text file and prints its content to the std output.
* @filename: A pointer to the name of the file to be read.
* @letters: The number of characters that the function should read and print.
*
* Return: If the function fails or if the filename is NULL - 0.
*         Otherwise - the actual number of characters read and printed.
*
* Author: Amira
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file_descriptor, bytes_read, bytes_written;
	char *file_contents;

	if (filename == NULL)
		return (0);

	file_contents = malloc(sizeof(char) * letters);
	if (file_contents == NULL)
		return (0);

	file_descriptor = open(filename, O_RDONLY);
	bytes_read = read(file_descriptor, file_contents, letters);
	bytes_written = write(STDOUT_FILENO, file_contents, bytes_read);

if (file_descriptor == -1 || 
	bytes_read == -1 || 
	bytes_written == -1 || 
	bytes_written != bytes_read)
{
	free(file_contents);
	return (0);
}

	free(file_contents);
	close(file_descriptor);

	return (bytes_written);
}

