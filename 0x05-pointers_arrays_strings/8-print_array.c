#include "main.h"
#include <stdio.h>

/**
* print_array - print arrays in right order
* @a: is the array
* @n: is the size of the array
* Return nothing
*/
void print_array(int *a, int n)
{
int i;

for (i = 0; i < n; i++)
{
if (i != (n - 1))
{
printf("%d, ", a[i]);
}
else
{
printf("%d", a[i]);
}
}
_putchar('\n');
}
