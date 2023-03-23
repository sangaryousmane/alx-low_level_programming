#include "main.h"
/**
* print_line - print _ @n times
* @n: parameter for the function
* Return nothing
*/
void print_line(int n)
{
int i;
for (i = 0; i < n; i++)
{
if (i > 0)
{
_putchar('_');
}
else
{
_putchar(10);
}
}
_putchar(10);
}
