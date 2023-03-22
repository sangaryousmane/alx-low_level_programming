#include <stdio.h>
#include "main.h"
/**
*main - print the first n numbers of fibonacci sequence.
*Return: always return 0
*
*/

int main(void)
{

unsigned long fibonacci[120];
int i, n = 98;

fibonacci[0] = 1;
fibonacci[1] = 2;

for (i = 2; i < n; i++)
{
fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
}

for (i = 0; i < n; i++)
{
printf("%lu ", fibonacci[i]);

if (i != 98)
{
printf(", ");
}
}
printf("\n");
return (0);
}
