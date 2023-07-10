#include "main.h"


/**
* append_text_to_file - append some text to a file
* @filename: name of file
* @text_content: content to append
* Return: 1 on success, -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int file_descrpt, c;
	int sz = 0;

	if (!filename)
	{
		return (-1);
	}

	file_descrpt = open(filename, O_WRONLY | O_APPEND);
	if (file_descrpt < 0)
	{
		return (-1);
	}

	if (text_content)
	{
		while (text_content[sz])
		{
			sz++;
		}
		c = write(file_descrpt, text_content, sz);
		if (c != sz)
		{
			return (-1);
		}
		close(file_descrpt);
		return (1);

}
