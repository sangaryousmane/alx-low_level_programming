#include "main.h"

/**
* reverse_array - reverse an array
* @a: the array
* @n: the length of the array
* Return nothing
*/
void reverse_array(int *a, int n)
{
int i, temp;
int end = n - 1;
for (i = end; i < n / 2; i--)
{
temp = a[n - 1 - i];
a[n - 1 - i] = a[i];
a[i] = temp;
}
}
