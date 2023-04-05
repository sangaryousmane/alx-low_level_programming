#include "main.h"
#include <stdio.h>
/**
* _strpbrk - searches a string for set of bytes
* @s: first pointer
* @accept: second pointer
* Return: a pointer to the byte in @s, otherwise, NULL
*/
char *_strpbrk(char *s, char *accept)
{
if (*s == '\0')
{
return (NULL);
}
if (*accept == '\0')
{
return (_strpbrk(s + 1, accept));
}
if (*s == *accept)
{
return (s);
}
return (_strpbrk(s, accept + 1));
}
