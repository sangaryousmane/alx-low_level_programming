#include "main.h"

/**
* read_textfile - reads a text file and prints it to the POSIX standard output.
* @filename: name of the file
* @letters: the number of letters it should read and print
* Return: number of letters it could print
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t read_file, write_file, fd;
char *buffer;

if (!filename)
{
return (0);
}
fd = open(filename, O_RDONLY);
if (fd)
{
return (0);
}
buffer = malloc(sizeof(char) * letters);
if (!buffer)
{
return (0);
}
read_file = read(fd, buffer, letters)
write_file = write(STDOUT_FILENO, buffer, read_file);
free(buffer);
close(fd);
return (write_file);
}
