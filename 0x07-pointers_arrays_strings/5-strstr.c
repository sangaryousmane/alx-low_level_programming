#include "main.h"
#include <stdio.h>
/**
* _strstr - locates a substring
* @haystack: the string to search
* @needle: first occurence to find
* Return: pointer to the beginning of string
*/
char *_strstr(char *haystack, char *needle)
{
int len1 = 0;
while (haystack[len1] != '\0')
{
len1++;
}

int len2 = 0;
while (needle[len2] != '\0')
{
len2++;
}
int i = 0;
for (; i <= len1 - len2; i++)
{
int j = 0;
while (j < len2)
{
if (haystack[i + j] != needle[j])
{
break;
}
j++;
}
if (j == len2)
{
return (&str1[i]);
}
}
return ('\0');
}


