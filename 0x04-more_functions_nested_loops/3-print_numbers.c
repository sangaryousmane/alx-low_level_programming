#include "main.h"
/**
* print_numbers - print the numbers from 0 to 9.
* Return: 0
*/
int print_numbers(void)
{
int i;
i = 0;
while (i < 10)
{
_putchar(i + '0');
i++;
}
_putchar(i + '0');
return (0);
}
