#include "main.h"
/**
*print_times_table - print @n times table in the range of 0 to 15
*@n: pass to function as parameter.
*Return void
*/
void print_times_table(int n)
{

int digit, mult;
int result;
if (n <= 15 && n >= 0)
{
for (digit = 0; digit <= n; digit++)
{
_putchar('0');

for (mult = 1; mult <= n; mult++)
{
_putchar(',');
_putchar(' ');
result = digit * mult;
if (result <= 99)
{
_putchar(' ');
}
if (result <= 9)
_putchar(' ');
if (result >= 100)
{
_putchar((result / 100) + '0');
_putchar((result / 10) % 10 + '0');
}
else if (result >= 10 != 0)
{
_putchar((result / 10) + '0');
}
_putchar((result % 10) + '0');
}
_putchar('\n');
}
}
}
