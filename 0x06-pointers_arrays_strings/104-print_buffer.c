#include <stdio.h>
#include "main.h"
/**
 * print_buffer - prints a buffer to output
 * @b: a pointer that points to char array
 * @size: int that hold size
 * Return: nothing
 */
void print_buffer(char *b, int size)
{
int inner, outer = 0;
while (outer < size)
{
printf("%08x: ", outer);
for (inner = outer; inner < outer + 10; inner++)
{
if (inner < size)
{
printf("%02x", (unsigned char) b[inner]);
}
else
{
printf("  ");
}
if (inner % 2)
{
putchar(' ');
}
}
for (inner = outer; inner < outer + 10; inner++)
{
if (inner >= size)
{
break;
}
if (b[inner] >= ' ' && *(b + inner) <= '~')
_putchar(*(b + inner));
else
_putchar('.');
}
outer += 10;
if (outer < size)
{
_putchar('\n');
}
}
_putchar('\n');
}
