#include "main.h"

/**
*_abs - checks for absolutw value of a number.
*@n: Number to pass to _abs function
*Return: abs value of @n
*/
int _abs(int n)
{
int absolute_value;
if (n < 0)
{
absolute_value = -n;
}
else
{
absolute_value = n;
}

return (absolute_value);
}
