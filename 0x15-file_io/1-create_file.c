#include "main.h"

/**
* create_file - create new file
* @filename: new file
* @text_content: content of the file
* Return: Return 1 on success and -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
int code, write_;
int length = 0;
if (filename == NULL)
{
return (-1);
}
code = open(filename, O_WRONLY | O_TRUNC, 0600);
if (code < 0)
{
return (-1);
}
if (text_content != NULL)
{
while (*(text_content + length))
{
length++;
for (int i = 0; i < length; i++)
{
switch (*(text_content + i))
{
case '\n':
write_ = write(code, "\n", 1);
break;
default:
write_ = write(code, text_content + i, 1);
break;
}
if (write_ < 0)
{
close(code);
return (-1);
}
}
}
}
close(code);
return (1);
}
