#include "main.h"

/**
* create_file - create new file
* @filename: new file
* @text_content: content of the file
* Return: Return 1 on success and -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
int file_handler, t, length = 0;
int i;
if (!filename)
return (-1);
file_handler = open(filename, 0x0100 | 0x0002 | 0x0200, 0600);
if (file_handler < 0)
{
return (-1);
}
if (text_content)
{
for (i = 0; *(text_content + i); i++)
{
length++;
}
t = write(file_handler, text_content, length);
if (t != length)
{
close(file_handler);
return (-1);
}
}
close(file_handler);
return (1);
}
