#include "main.h"
/**
* _strchr - locates a character in a string
* @s: the string of characters
* @c: a character to look for
* Return: a pointer if found, otherwise NULL
*/
char *_strchr(char *s, char c)
{
int index;
index = 0;


while (s[index] != '\0')
{
if (s[index] == c)
{
return (&s[index]);
break;
}
index++;
}
return ('\0');
}
