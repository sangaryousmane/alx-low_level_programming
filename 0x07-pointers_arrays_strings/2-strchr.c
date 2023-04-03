#include "main.h"
/**
* _strchr - locates a character in a string
* @s: the string of characters
* @c: a character to look for
* Return: a pointer if found, otherwise NULL
*/
char *_strchr(char *s, char c)
{
int length = 0;
int i = 0;
while (s[length] != '\0')
{
length++;
}

for (; i < length; i++)
{
if (s[i] == c)
{
return *(c);

}
else
{
return (NULL);
}
}
}
