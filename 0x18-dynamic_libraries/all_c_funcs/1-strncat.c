#include "main.h"
#include <string.h>

/**
* _strncat - concatenates string with @n bytes
* @dest: destination
* @src: source
* @n: number of bytes
* Return: the pointer to the concatenation of _strncat
*/
char *_strncat(char *dest, char *src, int n)
{
char *result = strncat(dest, src, n);
return (result);
}
