#include "main.h"
/**
* _strchr - locates a character in a string
* @s: the string of characters
* @c: a character to look for
* Return: a pointer if found, otherwise NULL
*/
char *_strchr(char *s, char c)
{

while (*s != '\0')
{
if (*s == c)
return (s);
}

if (c == '\0')
return (s);
else
return (NULL);
}
