#include "main.h"

/**
* _strncpy - copy one string to another
* @dest: destination string
* @src: source string
* @n : number bytes to copy
* Return: a pointer to the function
*/
char *_strncpy(char *dest, char *src, int n)
{
int index;
for (index = 0; index < n; src[index] != '\0'; index++)
{
dest[index] = src[index];
}
for ( ; index < n; index++)
{
dest[index] = '\0';
}
return (dest);
}
