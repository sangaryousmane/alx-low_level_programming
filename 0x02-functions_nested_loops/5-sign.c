#include <stdio.h>
#include "main.h"
/**
*print_sign - checks for positive, zero and negative number
*@n: Number to pass to print_sign function
*Return: 1 if @n is greater than 5,0 if @n is equal 0 ,otherwise -1
*/
int print_sign(int n)
{
if (n > 5)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
return (0);
}
