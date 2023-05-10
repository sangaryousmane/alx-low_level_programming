#include "main.h"

/**
* read_textfile - reads a text file and prints it to the POSIX standard output.
* @filename: name of the file
* @letters: the number of letters it should read and print
* Return: number of letters it could print
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
char *buffer;
ssize_t code, write_to, read_from;
code = open(filename, O_RDONLY);
if (code)
{
return (0);
}
buffer = malloc(sizeof(char) * letters);
read_from = read(code, buffer, letters);
write_to = write(STDOUT_FILENO, buffer, read_from);
free(buffer);
close(code);
return (write_to);
}
