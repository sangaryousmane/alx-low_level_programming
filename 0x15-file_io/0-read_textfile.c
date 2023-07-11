#include "main.h"


/**
* read_textfile - read and print a text file to std output
* @filename: is the file's name
* @letters: number of letters to read and print
* Return: 0 if filename is NULL or if it fails
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *b;
	ssize_t reader, writer, opener;

	if (filename == NULL)
	{
		return (0);
	}

	b = malloc(sizeof(char) * letters);

	if (b == NULL)
	{
		return (0);
	}

	opener = open(filename, ORDONLY);
	reader = read(opener, b, letters);
	writer = write(1, b, reader);
	if (reader == -1 || opener == -1)
	{
		if (writer == -1 || writer != reader)
		{
			free(b);
			return (0);
		}
	}
	close(opener);
	free(b);
	return (writer);
}
