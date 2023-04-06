#include "main.h"

/**
* _palindrome - check for palindrome
* @s: pointer array
* @start: beggining of string
* @end: end of string
* Return: 1 is it is, else 0;
*/
int _palindrome(char *s, int start, int end)
{
if (start >= end)
{
return (1);
}
else
{
if (s[start] != s[end])
{
return (0);
}
else
{
return (_palindrome(s, start + 1, end - 1));
}
}
}



/**
* is_palindrome - returns 1 if it is palindrome else 0
* @s: string to check
* Return: 1 if it is, else 0
*/
int is_palindrome(char *s)
{
int end = _strlen_recursion(s);
int result = _palindrome(s, 0, end - 1);

if (result == 1)
{
return (1);
}
return (0);
}
