#include "main.h"

/**
* _memset - fills n times the value of b in the s array
* @s: character pointer
* @b: the constant byte
* @n: number of bytes to be fill
* Return: a pointer to the memory area @s
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int count;
for (count = 0; count < n; count++)
{
s[count] = b;
}
return (s);
}

