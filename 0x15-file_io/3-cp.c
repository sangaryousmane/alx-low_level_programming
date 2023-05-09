#include "main.h"

/**
* main - copies the contents of a file to another file
* @argc: argument counts
* @argv: number of arguments
* Return: 0 always when success
*/
int main(int argc, char *argv[])
{
int file_d_code, file_write, read_, i, j;
char buffer[512];
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
file_d_code = open(argv[1], O_RDONLY);
if (file_d_code < 0)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
file_write = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
while ((read_ = read(file_d_code, buffer, BUFSIZ)) > 0)
{
if (file_write < 0 || write(file_write, buffer, read_) != read_)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
close(file_d_code);
exit(99);
}
}
if (read_ < 0)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
i = close(file_d_code);
j = close(file_write);
if (i < 0 || j < 0)
{
if (i < 0)
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_d_code);
if (j < 0)
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_write);
exit(100);
}
return (0);
}
