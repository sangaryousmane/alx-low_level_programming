#include <stdio.h>
#include "main.h"
/**
*main - print the first n numbers of fibonacci sequence.
*Return: always return 0
*
*/

int main(void)
{

long i, num1 = 1, num2 = 2;
long  temp, n = 50;
for (i = 0; i < n; i++)
{
if (i < 50)
{
printf("%ld, ", num1);
}
temp = num1 + num2;
num1 = num2;
num2 = temp;
}
puts("\n");
return (0);
}
