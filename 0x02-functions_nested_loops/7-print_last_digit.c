#include <stdio.h>
#include "main.h"
/**
*print_last_digit - print and return last digit of a number.
*@n: Number to pass to _abs function
*Return: the last digit of a number.
*/
int print_last_digit(int n)
{

if (n < 0)
{
_putchar('0' - (n % 10));
return (-(n % 10));
}
else
{
_putchar('0' + (n % 10));
return (n % 10);
}
return (0);
}
