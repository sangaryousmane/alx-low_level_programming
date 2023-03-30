#include <string.h>
#include "main.h"
/**
* _strcat - concatenates two strings
* @dest: destination of string
* @src: source of string
* Return: a pointer to the function
*/
char *_strcat(char *dest, char *src)
{
char *result = strcat(dest, src);
return (result);
}
