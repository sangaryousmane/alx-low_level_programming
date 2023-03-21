#include <stdio.h>
#include "main.h"

/**
*_isalpha - checks for lowercase characters.
*@c: Number to pass to _isalpha function
*Return: 1 if @c is a alphabet lowercase or uppercase,otherwise 0
*/
int _isalpha(int c)
{
if (isalpha(c) || islower(c))
{
if (isupper(c))
{
return (1);
}
}
else
{
return (0);
}
return (0);
}
