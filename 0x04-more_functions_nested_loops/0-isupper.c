#include "main.h"
#include <ctype.h>
/**
* _isupper - check for lower and uppercase letters
*@c: the parameter to the _isupper function
* Return: 0 if @c is lowercase , 1 otherwise
*/
int _isupper(int c)
{
if (isupper(c))
{
return (1);
}
else
{
return (0);
}
}
