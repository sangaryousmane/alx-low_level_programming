#include "main.h"

/**
* create_file - create new file
* @filename: new file
* @text_content: content of the file
* Return: Return 1 on success and -1 on failure
*/
int create_file(const char *filename, char *text_content)
{

int code, write_file;
if (!filename)
{
return (-1);
}
code = open(filename, O_WRONLY | O_TRUNC, 600);
if (code == -1)
{
write(code, "fails", sizeof("fails"));
return (-1);
}
write_file = write(code, text_content, sizeof(text_content));
close(code);

if (write_file < 0)
{
return (-1);
}
return (1);
}
