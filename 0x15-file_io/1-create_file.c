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
	int length = 0, writer;

	if (filename == NULL)
	{
		return (-1);
	}
	c = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (c == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		while (text_content[length] == '\0')
		{
			length++;
		}
	writer = write(c, text_content, length);
	}
	if (writer == -1)
	{
		return (-1);
	}
	close(c);
	return (1);

}
