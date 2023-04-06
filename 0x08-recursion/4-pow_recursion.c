#include "main.h"
/**
* _pow_recursion - returns the value of x raise to y
* @x: the base
* @y: the exponent
* Return: -1 if y is less than 0, otherwise the answer
*/
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
else if (y == 0)
{
return (1);
}
return (x * _pow_recursion(x, y - 1));
}
