#include "main.h"
/**
*print_diagonal - prints a diagonal
*@n:parameter
*Return:returns nothing
*/
void print_diagonal(int n)
{
int size, space;
if (n > 0)
{
for (size = 0; size < n; size++)
{
for (space = 0; space < size; space++)
_putchar(' ');

_putchar('\\');

if (size == (n - 1))
continue;
_putchar('\n');
}
}
_putchar('\n');
}
