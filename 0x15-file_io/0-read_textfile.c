#include "main.h"

/**
* read_textfile - reads a text file and prints it to the POSIX standard output.
* @filename: name of the file
* @letters: the number of letters it should read and print
* Return: number of letters it could print
*
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
int code;
ssize_t read_file, write_file;
char *buf;
if (filename == NULL)
{
return (0);
}
code = open(filename, O_RDONLY);
if (code < 0)
{
return (0);
}
buf = malloc(sizeof(char) * letters);
if (!buf)
{
return (0);
}
read_file = read(code, buf, letters);
if (read_file < 0)
{
free(buf);
return (0);
}
buf[read_file] = '\0';
close(code);
write_file = write(STDOUT_FILENO, buf, read_file);
if (write_file < 0)
{
free(buf);
return (0);
}
free(buf);
return (write_file);
}
