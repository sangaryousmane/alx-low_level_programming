#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _close_file - Closes file descriptors.
 * @fd: The file descriptor to be closed.
 */
void _close_file(int fd)
{
	int c;
	c = close(fd);	
	
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}


/**
 * do_buffer - Allocates buffer's bytes
 * @file: The name of the buffer's file
 *
 * Return: A pointer to the buffer
 */
char *do_buffer(char *file)
{
	char *b;
	
	b = malloc(sizeof(char) * 1024);

	if (b == NULL)
	{
		dprintf(2, "Error: Can't write to %s\n", file);
		exit(99);
	}
	return (b);
}


/**
 * main - Copies the contents of a file to another file.
 * @argc: nums of args
 * @argv: array of pointers to the argument
 *
 * Return: 0 on success.
 *
 */
int main(int argc, char *argv[])
{
	int from, to;
	int r, w;
	char *buffer;	
	
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = do_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	r = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	
	do {
		if (from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		w = write(to, buffer, r);
		
		if (to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		r = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);
	} while (r > 0);
	free(buffer);
	_close_file(from);
	_close_file(to);
	return (0);
}
