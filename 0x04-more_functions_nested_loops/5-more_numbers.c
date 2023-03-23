#include "main.h"

/**
* more_numbers - prints 0 t0 14 ten times
* Return: nothing
*/
void more_numbers(void)
{

int i, j;
for (i = 0; i < 10; i++)
{
for (j = 0; j <= 14; j++)
{
if (j > 9)
{
_putchar((j / 10) + '0');
}
_putchar((j % 10) + '0');
}
_putchar('\n');
}
}
