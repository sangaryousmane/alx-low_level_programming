#include "main.h"

/**
* _strcpy - copies @src to @dest
* @dest: destination string
* @src: string to copy from
* Return: a pointer to the destination string
*/
char *_strcpy(char *dest, char *src)
{
int count = 0;
int j;

while (*(src + count) != '\0')
{
count++;
}
for (j = 0; j < count ; j++)
{
dest[j] = src[j];
}
dest[count] = '\0';
return (dest);
}
