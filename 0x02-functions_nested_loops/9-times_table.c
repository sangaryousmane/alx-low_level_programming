#include <stdio.h>
#include "main.h"

/**
* times_table - prints the 9 times table that starts from 0
* Return: void
*/
void times_table(void)
{

int i;
int j;
int product;

for (i = 0; i <= 9; i++)
{
_putchar('0');

for (j = 1; j <= 9; j++)
{
product = j * i;
_putchar(',');

_putchar(' ');

if (product <= 9)
{
_putchar(' ');
_putchar(product + '0');
}
else
{
_putchar(product / 10 + '0');
_putchar(product % 10 + '0');
}
}
_putchar('\n');
}
}
