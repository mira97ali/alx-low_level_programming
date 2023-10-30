#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *allocate_buffer(char *output_file);
void close_descriptor(int fd);

/**
* allocate_buffer - Allocates a 1024-byte buffer for file copying.
* @output_file: The name of the file the buffer is used for.
*
* Return: A pointer to the newly allocated buffer.
*/

char *allocate_buffer(char *output_file)
{
	char *copy_buffer;

	copy_buffer = malloc(sizeof(char) * 1024);

	if (copy_buffer == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", output_file);
		exit(99);
	}

	return (copy_buffer);
}

/**
* close_descriptor - Closes file descriptors.
* @fd: The file descriptor to be closed.
*/

void close_descriptor(int fd)
{
	int close_status;

	close_status = close(fd);

	if (close_status == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
* main - Copies the contents of one file to another.
* @argc: The number of arguments supplied to the program.
* @argv: An array of pointers to the arguments.
*
* Return: 0 on success.
*
* Description: If the argument count is incorrect - exit code 97.
*              If the source  does not exist or cannot be read - exit code 98.
*              If the target cannot be created or written to - exit code 99.
*              If there is an issue closing descriptors - exit code 100.
*
* Author: Amira
*/

int main(int argc, char *argv[])
{
	int source_file_descriptor, target_file_descriptor, read_bytes, write_bytes;
	char *copy_buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	copy_buffer = allocate_buffer(argv[2]);
	source_file_descriptor = open(argv[1], O_RDONLY);
	read_bytes = read(source_file_descriptor, copy_buffer, 1024);
	target_file_descriptor = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do

	{
		if (source_file_descriptor == -1 || read_bytes == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", argv[1]);
			free(copy_buffer);
			exit(98);
		}

		write_bytes = write(target_file_descriptor, copy_buffer, read_bytes);
		if (target_file_descriptor == -1 || write_bytes == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", argv[2]);
			free(copy_buffer);
			exit(99);
		}

		read_bytes = read(source_file_descriptor, copy_buffer, 1024);
		target_file_descriptor = open(argv[2], O_WRONLY | O_APPEND);

	} while (read_bytes > 0);

	free(copy_buffer);
	close_descriptor(source_file_descriptor);
	close_descriptor(target_file_descriptor);

	return (0);
}


