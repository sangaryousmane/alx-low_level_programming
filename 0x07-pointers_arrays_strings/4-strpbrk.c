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
int i, j;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; i++)
{
if (s[i] == accept[j])
return (&s[i]);
}
}
return ('\0');
}
