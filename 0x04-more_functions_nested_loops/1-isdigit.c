#include <ctype.h>
#include "main.h"

/**
* _isdigit - check if @c is a digit or not
* @c: parameter to the function _isdigit
* Return: 1 if @c is a digit, 0 otherwise
*/
int _isdigit(int c)
{
if (!isdigit(c))
{
return (0);
}
else
{
return (1);
}
}
