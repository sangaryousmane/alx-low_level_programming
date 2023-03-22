#include <stdio.h>
#include "main.h"

/**
*print_to_98 - prints all natural numbers from n to 98
*@n: Number to pass to print_sign function
*Return: nothing
*/
void print_to_98(int n)
{
int i;
i = 0;

if (n <= 98)
{
while (n <= 97)
{
printf("%d, ", n);
n++;
}
}
else
{
for (i = n; i > 98; i--)
{
printf("%d, ", i);
}
}
printf("98\n");
}
