#include "main.h"
/**
* _strlen - return the length of the @s argument
* Return: the size of the argument
* @s: array of string
*/
int _strlen(char *s)
{
int len = 0;
while (s[len] != '\0')
{
len++;
s++;
}
return (len);
}
