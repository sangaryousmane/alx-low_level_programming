#include "main.h"

/**
* append_text_to_file - append text to a file
* @filename: name of the file
* @text_content: the content to be written
* Return: 1 if success, otherwise -1
*/
int append_text_to_file(const char *filename, char *text_content)
{
int file_d, code, sz = 0;

if (filename == NULL)
return (-1);

file_d = open(filename, O_WRONLY | O_APPEND);
if (file_d < 0)
{
return (-1);
}
if (text_content)
{
while (text_content[sz])
{
sz++;
}
code = write(file_d, text_content, sz);
if (code != sz)
{
return (-1);
}
}
close(file_d);
return (1);
}
