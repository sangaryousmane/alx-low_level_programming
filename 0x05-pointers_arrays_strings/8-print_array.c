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

for (i = 0; i < n; i++)
{
if (i != end)
{
printf("%d, ", *(a + i));
}
else
{
printf("%d", *(a + i));
}
}
_putchar('\n');
}
