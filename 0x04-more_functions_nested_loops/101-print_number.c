#include "main.h"

/**
* print_number - print integers without using arrays, pointers or hard coding
* @n: parameter to the print_number function
* Return nothing
*/
void print_number(int n)
{
unsigned int num = n;
if (num < 0)
{
_putchar('-');
num = -num;
}
if (num > 9)
{
print_number(num / 10);
}
_putchar(num % 10);
}
