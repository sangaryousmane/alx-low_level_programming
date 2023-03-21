#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 *_islower - checks for lowercase characters.
 *@c: Number to pass to _islower function
 *Return: 1 if @c is lowercase otherwise 0
 */
int _islower(int c)
{
if (islower(c))
{
return (1);
}
else
{
return (0);
}
return (0);
}
