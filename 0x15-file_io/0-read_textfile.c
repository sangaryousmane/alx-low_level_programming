#include "main.h"


/**
* read_textfile - reads a text file and prints it to the POSIX standard output.
* @filename: name of the file
* @letters: the number of letters it should read and print
* Return: number of letters it could print
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t read_file, write_file;
int code;
char *buffer;

if (filename == NULL)
{
return (0);
}

code = open(filename, _O_RDONLY);
if (code == -1)
{
return (0);
}
buffer = malloc(sizeof(char) * (letters));

if (buffer == NULL)
{
return (0);
}
read_file = read(code, buffer, letters);
write_file = write(1, buffer, read_file);
close(code);
free(buffer);
return (write_file);
}
