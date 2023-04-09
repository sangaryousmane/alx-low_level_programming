#include "main.h"
/**
* _strstr - search for a substring in a string
* @haystack: the string to search
* @needle: first occurence to find
* Return: pointer to the beginning of string
*/
char *_strstr(char *haystack, char *needle)
{
while (*haystack != '\0')
{
char *i = haystack;
char *p = needle;
while (*i == *p && *p != '\0')
{
i++;
p++;
}
if (*p == '\0')
{
return (haystack);
}
haystack++;
}
return (0);
}

