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
int end;
end = n - 1;

if (n > 0)
{
for (i = 0; i < n; i++)
{
printf("%d", *(a + i));

if (i != end)
{
printf(", ");
}
}
_putchar('\n');
}
else
{
_putchar('\n');
}
}
