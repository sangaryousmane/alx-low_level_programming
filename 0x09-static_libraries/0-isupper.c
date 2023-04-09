#include "main.h"

/**
* _isupper - check for lower and uppercase letters
*@c: the parameter to the _isupper function
* Return: 0 if @c is lowercase , 1 otherwise
*/
int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
return (0);
}
