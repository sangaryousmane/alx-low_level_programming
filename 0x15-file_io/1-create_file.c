#include "main.h"


/**
* create_file - creates a file and write a content to it
* @filename: name of the file
* @text_content: content to be written
* Return: 1 on success, -1 on failure
*
*/
int create_file(const char *filename, char *text_content)
{
	int c;

	if (!filename)
	{
		return (-1);
	}

	c = open(filename, O_WRONLY | O_TRUNC, 600);
	if (c == -1)
	{
		write(c, "fails", sizeof("fails"));
		return (-1);
	}
	write(c, text_content, sizeof(text_content));
	close(c);

	return (c);

}
