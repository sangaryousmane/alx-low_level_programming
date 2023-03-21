#include <stdio.h>
#include "main.h"
/**
*print_last_digit - print and return last digit of a number.
*@n: Number to pass to _abs function
*Return: the last digit of a number.
*/
int print_last_digit(int n)
{
int last_digit = n % 10;
_putchar('0' + last_digit);
return (last_digit);
}
