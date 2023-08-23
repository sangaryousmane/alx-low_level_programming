#include "main.h"

/**
* _memcpy - copies n  bytes from memory src to dest
* @dest: destination pointer
* @src: source pointer
* @n: number of bytes to copy
* Return: a pointer to @dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int count = 0;
while (count < n)
{
*(dest + count) = src[count];
count++;
}
return (dest);
}
