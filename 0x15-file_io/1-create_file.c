#include "main.h"
#include <string.h>
/**
* create_file - create new file
* @filename: new file
* @text_content: content of the file
* Return: Return 1 on success and -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
int fd;
unsigned int t;
fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
if (fd < 0)
{
return (-1);
}
if (text_content)
{
t = write(fd, text_content, strlen(text_content));
if (t != strlen(text_content))
{
return (-1);
}
}
close(fd);
return (1);
}
