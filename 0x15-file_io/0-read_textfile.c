#include "main.h"

/**
* read_textfile - reads a text file and prints it to the POSIX standard output.
* @filename: name of the file
* @letters: the number of letters it should read and print
* Return: number of letters it could print
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
size_t read_file, write_file;
int fd;
char *buffer;
fd = open(filename, O_RDONLY);
if (fd < 0)
{
return (0);
}
buffer = malloc(letters);
if (!buffer)
{
return (0);
}
read_file = read(fd, buffer, letters);
if (read_file < 0)
{
free(buffer);
return (0);
}
write_file = write(STDOUT_FILENO, buffer, read_file);
free(buffer);
return (write_file);
}
