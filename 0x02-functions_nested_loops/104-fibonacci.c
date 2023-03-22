#include <stdio.h>
#include "main.h"
/**
*main - print the first n numbers of fibonacci sequence.
*Return: always return 0
*
*/

int main(void)
{

int i, n = 98;
unsigned long fib1 = 1, fib2 = 2, fib3;
printf("%lu, %lu", fib1, fib2);

for (i = 3; i <= 98; i++)
{
fib3 = fib1 + fib2;
printf(", %lu", fib3);

fib1 = fib2;
fib2 = fib2;
}
printf("\n");
return (0);
}
