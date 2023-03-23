#include "main.h"
/**
*print_times_table - print @n times table in the range of 0 to 15
*@n: pass to function as parameter.
*Return void
*/
void  print_times_table(int n)
{
int answer, i, j;

if (n < 0 || n > 15)
{
return;
}

for (i = 0; i <= n; i++)
{
_putchar('0');
for (j = 0; j <= n ; j++)
{
answer = i * j;
_putchar(',');
_putchar(' ');

if (answer <= n)
{
_putchar(' ');
_putchar(answer + '0');
}
else
{
_putchar((answer / 10) + '0');
_putchar((answer % 10) + '0');
}
}
_putchar('\n');
}
}
