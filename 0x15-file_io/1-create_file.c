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
	int fd, len, w;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 00600);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (len = 0; text_content[len] != '\0'; len++)
		;
		w = write(fd, text_content, len);
	}
	if (w == -1)
	{
		return (-1);
	}
	close(fd);
	return (1);

}
