#include "main.h"


/**
* read_text_file - read and print a text file to std output
* @filename: is the file's name
* @letters: number of letters to read and print
* Return: 0 if filename is NULL or if it fails
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int code;
	char *b;
	ssize_t reader, writer;

	if (!filename)
	{
		return (0);
	}
	code = open(filename, O_RDONLY);
	b = malloc(sizeof(char) * (letters));

	if (code == -1 || !b)
	{
		return (0);
	}

	reader = read(code, b, letters);
	writer = write(1, b, reader);
	
	close(c);
	free(b);
	return (writer);
}
