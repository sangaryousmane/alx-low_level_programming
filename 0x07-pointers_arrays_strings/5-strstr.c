#include "main.h"

/**
* _strstr - locates a substring
* @haystack: the string to search
* @needle: first occurence to find
* Return: pointer to the beginning of string
*/
char *_strstr(char *haystack, char *needle)
{
if (*needle == '\0')
{
return (haystack);
}
while (*haystack != '\0')
{
if (*haystack == *needle)
{
char *p;
*p = _strstr(haystack + 1, needle + 1);

if (p != NULL)
{
return (haystack);
}
}
haystack++;
}
return (NULL);
}
