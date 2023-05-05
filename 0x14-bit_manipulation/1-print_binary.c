#include "main.h"

/** 
* print_binary -  prints the binary representation of a number.
* @n: the number 
* Return: 
*/
void print_binary(unsigned long int n)
{
if (n == 0) {
_putchar('0');
return;
}  
unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
int flag = 0;
while (mask)
{
if (n & mask)
{
_putchar('1');
flag = 1;
}
else if (flag)
{
_putchar('0');
}
mask >>= 1;
}
}
