#include "main.h"

/**
 * _isalpha - checks for alphabets
 * @c: character to check
 * Return: 0 if c is not an alpha, 1 otherwise
 */
int _isalpha(int c)
{

if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
{
return (1);
}
else
{
return (0);
}
}
